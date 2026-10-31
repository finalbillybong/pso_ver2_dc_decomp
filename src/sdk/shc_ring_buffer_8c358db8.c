#define MIN(a, b) ((a) < (b) ? (a) : (b))
typedef void (*RbCallback)(void *arg, int code);

typedef struct Ring {
    char *name;
    int inuse;
    char *kind;
    int count;
    int space;
    int wpos;
    int rpos;
    char *buf;
    int size;
    int extra;
    RbCallback cb;
    void *arg;
} Ring;

typedef struct Span {
    char *ptr;
    int len;
} Span;

extern void *memset(void *, int, unsigned long);
extern void *memcpy(void *, const void *, unsigned long);
extern int ring_users_8c3fb6c4;
extern Ring rings_8c546b10[64];
extern char d_8c3fb694[];
extern char ring_kind_8c3f6008[];

int ring_lock_8c358db8(Ring *rb)
{
    int m = _builtin_get_imask();
    _builtin_set_imask(15);
    return m;
}

void ring_unlock_8c358dd0(Ring *rb, int m)
{
    _builtin_set_imask(m);
}

void ring_hang_8c358de6(void *arg, int code)
{
    for (;;)
        ;
}

void func_8c358dea(void)
{
    if (ring_users_8c3fb6c4 == 0)
        memset(rings_8c546b10, 0, 0xc00);
    ring_users_8c3fb6c4++;
}

void shutdown_h_8c358e0c(void)
{
    ring_users_8c3fb6c4--;
    if (ring_users_8c3fb6c4 == 0)
        memset(rings_8c546b10, 0, 0xc00);
}

void ring_reset_8c358eb2(Ring *rb);

Ring *ring_create_8c358e28(char *buf, int size, int extra)
{
    int i;
    Ring *rb;

    for (i = 0; i < 64; i++)
        if (rings_8c546b10[i].inuse == 0)
            break;
    if (i == 64)
        return 0;
    rb = &rings_8c546b10[i];
    rb->inuse = 1;
    rb->name = d_8c3fb694;
    rb->buf = buf;
    rb->size = size;
    rb->extra = extra;
    rb->kind = ring_kind_8c3f6008;
    rb->cb = ring_hang_8c358de6;
    rb->arg = rb;
    ring_reset_8c358eb2(rb);
    return rb;
}

void ring_destroy_8c358e8a(Ring *rb)
{
    if (rb) {
        memset(rb, 0, 0x30);
        rb->inuse = 0;
    }
}

char *ring_kind_8c358ea8(Ring *rb)
{
    return rb->kind;
}

void ring_set_callback_8c358eac(Ring *rb, RbCallback cb, void *arg)
{
    rb->cb = cb;
    rb->arg = arg;
}

void ring_reset_8c358eb2(Ring *rb)
{
    rb->count = 0;
    rb->space = rb->size;
    rb->wpos = 0;
    rb->rpos = 0;
}

int ring_available_8c358ec0(Ring *rb, int which)
{
    if (which == 1)
        return rb->count;
    if (which == 0)
        return rb->space;
    if (rb->cb)
        rb->cb(rb->arg, -3);
    return 0;
}

void ring_acquire_8c358f12(Ring *rb, int which, int max, Span *out)
{
    Ring *r = rb;
    int m;

    m = ring_lock_8c358db8(rb);
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto next1;
next1:
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto next2;
next2:
    if (which == 0) {
        out->len = MIN(r->space, r->size - r->wpos + r->extra);
        out->len = MIN(out->len, max);
        out->ptr = r->buf + r->wpos;
        r->wpos = (r->wpos + out->len) % r->size;
        r->space -= out->len;
    } else if (which == 1) {
        out->len = MIN(r->count, r->size - r->rpos + r->extra);
        out->len = MIN(out->len, max);
        out->ptr = r->buf + r->rpos;
        r->rpos = (r->rpos + out->len) % r->size;
        r->count -= out->len;
    } else {
        out->len = 0;
        out->ptr = 0;
        if (r->cb)
            r->cb(r->arg, -3);
    }
    ring_unlock_8c358dd0(r, m);
}

void ring_commit_8c358fe4(Ring *rb, int which, Span *sp)
{
    Span *s = sp;
    int m;
    int off, end, n, t;

    if (s->len > 0 && s->ptr != 0) {
        m = ring_lock_8c358db8(rb);
        if (which == 1) {
            rb->count += s->len;
            off = s->ptr - rb->buf;
            if (off < rb->extra) {
                t = MIN(s->len, rb->extra - off);
                memcpy(rb->size + off + rb->buf, s->ptr, t);
            }
            end = s->ptr - rb->buf + s->len;
            if (end > rb->size) {
                t = MIN(s->len, end - rb->size);
                memcpy(rb->buf, rb->buf + (end - t), t);
            }
        } else if (which == 0) {
            rb->space += s->len;
        } else {
            s->len = 0;
            s->ptr = 0;
            if (rb->cb)
                rb->cb(rb->arg, -3);
        }
        ring_unlock_8c358dd0(rb, m);
    }
}

void ring_release_8c3590b8(Ring *rb, int which, Span *sp)
{
    int m;
    int a, b;

    if (sp->len > 0 && sp->ptr != 0) {
        m = ring_lock_8c358db8(rb);
        if (which == 0) {
            a = (rb->wpos + rb->size - sp->len) % rb->size;
            b = (sp->ptr - rb->buf) % rb->size;
            if (a == b) {
                rb->wpos = a;
                rb->space += sp->len;
            } else if (rb->cb)
                goto call;
        } else if (which == 1) {
            a = (rb->rpos + rb->size - sp->len) % rb->size;
            b = (sp->ptr - rb->buf) % rb->size;
            if (a == b) {
                rb->rpos = a;
                rb->count += sp->len;
            } else if (!rb->cb)
                ;
            else
                goto call;
        } else {
            sp->len = 0;
            sp->ptr = 0;
            if (rb->cb) {
call:
                rb->cb(rb->arg, -3);
            }
        }
        ring_unlock_8c358dd0(rb, m);
    }
}

int ring_query_8c35918c(Ring *rb, int which, int max, int *outlen)
{
    Ring *r = rb;
    int m;
    int t, n, k;

    m = ring_lock_8c358db8(rb);
    if (which == 0) {
        n = MIN(r->space, r->size - r->wpos + r->extra);
    } else if (which == 1) {
        n = MIN(r->count, r->size - r->rpos + r->extra);
    } else
        goto bad;
    k = MIN(n, max);
    goto done;
bad:
    k = 0;
    if (r->cb)
        r->cb(r->arg, -3);
done:
    *outlen = k;
    ring_unlock_8c358dd0(r, m);
    if (0) k = max;
    return k == max;
}

char *desc_width_8c359212(Ring *rb)
{
    return rb->buf;
}

int desc_height_8c359216(Ring *rb)
{
    return rb->size;
}

int desc_depth_8c35921a(Ring *rb)
{
    return rb->extra;
}
