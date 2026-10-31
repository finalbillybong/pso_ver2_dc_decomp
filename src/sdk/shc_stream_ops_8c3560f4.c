typedef struct Dev Dev;
typedef struct DevOps {
    char pad00[0x18];
    void (*read)(Dev *d, int a, int n, void *out);
    int pad1c;
    void (*write)(Dev *d, int a, void *buf);
    unsigned int (*avail)(Dev *d, int a);
} DevOps;
struct Dev {
    DevOps *ops;
};

typedef struct Pkt {
    int data;
    int count;
} Pkt;

typedef struct Stream {
    int pad00;
    int state;
    unsigned char b08;
    char pad09[0xf];
    int v18;
    char pad1c[0x28];
    float x;
    float y;
    char pad4c[0x24];
    int v70;
    int v74;
    int v78;
    int v7c;
    char pad80[0xc];
    Dev *out;
    Dev *in;
    int v94;
    int v98;
    int v9c;
    int va0;
    char pada4[0x240];
    char tail[4];
} Stream;

extern void cfg_from_src_8c3571d4(Stream *s, char *p);
extern void func_8c3577d4(Stream *s);
extern void func_8c357920(int a, int b, int c, int d);

void stream_flush_8c3560f4(Stream *s)
{
    Dev *d;
    Pkt p;
    for (;;) {
        d = s->in;
        d->ops->read(d, 1, 0x10, &p);
        if (p.count == 0)
            break;
        d = s->out;
        d->ops->write(d, 0, &p);
    }
    for (;;) {
        d = s->out;
        d->ops->read(d, 1, 0x10, &p);
        if (p.count == 0)
            break;
        d = s->out;
        d->ops->write(d, 0, &p);
    }
    s->state = 0;
}

int stream_state_8c356164(Stream *s)
{
    return s->state;
}

void stream_set_70_8c356168(Stream *s, int a, int b)
{
    s->v70 = a;
    s->v74 = b;
}

void stream_set_78_8c356172(Stream *s, int a, int b)
{
    s->v78 = a;
    s->v7c = b;
}

void stream_avail_8c35617c(s, a, b)
Stream *s;
unsigned int *a;
unsigned int *b;
{
    if (a)
        *a = s->out->ops->avail(s->out, 1) >> 4;
    if (b)
        *b = s->in->ops->avail(s->in, 1) >> 4;
}

unsigned int stream_out_avail_8c3561d0(s)
Stream *s;
{
    unsigned int r;
    r = s->out->ops->avail(s->out, 0);
    return r >> 4;
}

void stream_set_18_8c3561f2(Stream *s, int v)
{
    s->v18 = v;
    cfg_from_src_8c3571d4(s, s->tail);
}

void stream_set_b08_8c356204(Stream *s, unsigned char v)
{
    s->b08 = v;
}

int stream_b08_8c35620a(Stream *s)
{
    return s->b08;
}

void stream_set_pos_8c356210(Stream *s, float x, float y)
{
    s->x = x;
    s->y = y;
    func_8c3577d4(s);
    func_8c357920(s->v98, s->v94, s->va0, s->v9c);
}
