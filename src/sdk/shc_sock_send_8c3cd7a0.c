/* SDK pool group 0x8c3cd7a0-0x8c3cdbe4 (Hitachi SHC): socket send path -
   transmit-ring flush, send/queue entry points and buffer accessors. */
typedef struct Addr {
    char *ptr;
    unsigned char type;
    char unknown5[3];
} Addr;

typedef struct Ring {
    Addr a;
    unsigned int len;
    unsigned int head;
    unsigned int tail;
} Ring;

typedef struct Sock {
    char unknown0[8];
    unsigned int base;
    char unknown0c[0x18 - 0x0c];
    unsigned int size;
    char unknown1c[0xac - 0x1c];
    Ring rb;
    Addr tx;
    unsigned int arg;
    unsigned int sent;
    char unknown0d0[4];
    int cb;
    char unknown0d8[3];
    char flags;
    char unknown0dc[0xf8 - 0xdc];
    unsigned int start;
    unsigned int end;
    char unknown100[0x13a - 0x100];
    unsigned short state;
    char unknown13c[0x174 - 0x13c];
} Sock;

/* view of the transmit block at 0xc0; reading sent through it keeps the two loads separate */
typedef struct Tx { Addr a; unsigned int arg; unsigned int sent; } Tx;
extern Sock *g_entries_8c5b85b0;
extern unsigned short g_mss_8c5a3690;
extern void *memcpy(void *, const void *, unsigned long);
extern int sock_complete_8c3ce424(int, int, int, int);
extern void msg_sequence_8c3c8692(Addr *, int);
extern void msg_send_8c3c8474(Addr *, Addr *, unsigned short);
extern void sock_kick_8c3c93e0(Sock *);
extern int buf_alloc_8c3c8076(void *, unsigned int, int);
extern void buf_free_8c3c81b8(void *);

int sock_flush_8c3cd7a0(Sock *s)
{
    while (s->tx.type) {
        s->tx.type = 0;
        sock_complete_8c3ce424(s - g_entries_8c5b85b0, s->cb, 0, s->end - s->start);
    }
    return 0;
}

int sock_send_8c3cd7f2(Sock *s, Addr *to, unsigned int arg, int cb)
{
    Addr src;
    unsigned short t;
    Addr dst;
    unsigned int n;

    if (s->tx.type) goto fail;
    if (s->flags & 0x40) goto fail;
    s->cb = cb;
    memcpy(&s->tx, to, 8);
    s->arg = arg;
    s->sent = 0;
    if (s->rb.len == 0) {
        switch (s->state) {
        case 5: case 7: case 10: case 0: case 8:
            s->tx.type = 0;
            sock_complete_8c3ce424(s - g_entries_8c5b85b0, s->cb, 0, s->end - s->start);
            while (s->tx.type) {
                s->tx.type = 0;
                sock_complete_8c3ce424(s - g_entries_8c5b85b0, s->cb, 0, s->end - s->start);
            }
        }
        return 0;
    }
    do {
        n = s->rb.len > s->arg ? s->arg : s->rb.len;
        s->sent = n;
        memcpy(&src, &s->rb.a, 8);
        msg_sequence_8c3c8692(&src, s->rb.head);
        memcpy(&dst, &s->tx, 8);
        if (s->rb.head + n > g_mss_8c5a3690) {
            t = g_mss_8c5a3690 - s->rb.head;
            msg_send_8c3c8474(&dst, &src, t);
            msg_sequence_8c3c8692(&dst, t);
            n -= t;
            s->rb.len -= t;
            s->rb.head = 0;
            memcpy(&src, &s->rb.a, 8);
        }
        msg_send_8c3c8474(&dst, &src, n);
        s->rb.len -= n;
        s->rb.head += n;
        if (s->rb.head >= g_mss_8c5a3690) s->rb.head -= g_mss_8c5a3690;
        s->tx.type = 0;
        sock_complete_8c3ce424(s - g_entries_8c5b85b0, s->cb, ((Tx *)&s->tx)->sent, s->end - s->start + s->sent);
    } while (s->tx.type != 0 && s->rb.len > 0);
    sock_kick_8c3c93e0(s);
    if (s->tx.type) {
        switch (s->state) {
        case 5: case 7: case 10: case 0: case 8:
            sock_complete_8c3ce424(s - g_entries_8c5b85b0, s->cb, 0, s->end - s->start);
        }
    }
    return 0;
fail:
    return -1;
}

int sock_queue_8c3cda60(Sock *s, Addr *to, unsigned int arg, int cb)
{
    if (s->tx.type) return -1;
    s->cb = cb;
    memcpy(&s->tx, to, 8);
    s->arg = arg;
    s->sent = 0;
    return 0;
}

int sock_room_8c3cdaa0(Sock *s)
{
    if (s->flags & 0x80) {
        return g_mss_8c5a3690;
    } else {
        return g_mss_8c5a3690 - s->base;
    }
}

unsigned int ring_room_8c3cdaba(Sock *s)
{
    return g_mss_8c5a3690 - s->rb.len;
}

unsigned int sock_extent_8c3cdaca(Sock *s)
{
    if (s->flags & 0x80) return s->size;
    return s->base + s->size;
}

unsigned int ring_len_8c3cdae0(Sock *s)
{
    return s->rb.len;
}

unsigned int mss_8c3cdae6(void)
{
    return g_mss_8c5a3690;
}

int ring_open_8c3cdaee(Ring *r)
{
    if (r->a.type) return -1;
    if (buf_alloc_8c3c8076(r, g_mss_8c5a3690, 1) == 0) goto ok;
    return -1;
ok:
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto a;
a:
    r->len = r->head = r->tail = 0;
    return 0;
}

int sock_ring_open_8c3cdb24(Sock *s)
{
    if (s->rb.a.type != 0 || buf_alloc_8c3c8076(&s->rb, g_mss_8c5a3690, 1) != 0) return -1;
    s->rb.len = s->rb.head = s->rb.tail = 0;
    return 0;
}

int ring_close_8c3cdb8a(Ring *r)
{
    if (r->a.type == 0) return -1;
    buf_free_8c3c81b8(r);
    r->a.type = 0;
    return 0;
}

int sock_ring_close_8c3cdbae(Sock *s)
{
    if (s->rb.a.type == 0) return -1;
    buf_free_8c3c81b8(&s->rb);
    s->rb.a.type = 0;
    return 0;
}
