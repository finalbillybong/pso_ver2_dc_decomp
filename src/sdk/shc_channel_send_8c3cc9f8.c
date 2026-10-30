/* Channel packet queue: store a payload and post a message (Hitachi SHC). */
typedef struct Channel {
    char header[8];
    unsigned int pending;
    char unknownC[4];
    unsigned int seq;
    char unknown14[4];
    int total;
    char unknown1C[0xd0 - 0x1c];
    int arg;
    char unknownD4[0xdb - 0xd4];
    unsigned char busy : 1;
    unsigned char rest : 7;
} Channel;

typedef struct Body {
    int b0;
    char flag;
    char b5[3];
    int value;
    char type;
    char bD[3];
    short n;
    short zero;
    int x;
} Body;

typedef struct Msg {
    char h0[4];
    char flag;
    char h5[3];
    Body body;
} Msg;

typedef struct Payload {
    char unknown0[0x14];
    char data[0x98];
} Payload;

extern int channel_wait_8c3cdaca(Channel *c);
extern void *memcpy(void *d, const void *s, unsigned int n);
extern void msg_build_8c3c867e(Body *b, int *value);
extern void msg_sequence_8c3c8692(Msg *m, unsigned int n);
extern void msg_send_8c3c8474(Msg *m, Body *b, int size);

int channel_store_8c3cc9f8(void *src, Channel *c, int arg)
{
    if (c->busy == 1 && channel_wait_8c3cdaca(c) != 0) return -1;
    c->arg = arg;
    memcpy(((Payload *)c)->data, src, 0x98);
    c->busy = 0;
    return 0;
}

int channel_post_8c3cca4e(int *p, short n, Channel *c, int x)
{
    Msg m;
    m.body.flag = 1;
    m.flag = 1;
    if (!c->busy && channel_wait_8c3cdaca(c) != 0) return -1;
    goto l1;
l1:
    if (c->pending > 8) return -1;
    m.body.value = *p;
    m.body.type = 3;
    m.body.n = n;
    m.body.zero = 0;
    m.body.x = x;
    msg_build_8c3c867e(&m.body, &m.body.value);
    memcpy(&m, c, 8);
    if (c->seq) msg_sequence_8c3c8692(&m, c->seq * 16);
    msg_send_8c3c8474(&m, &m.body, 0x10);
    c->total += n;
    c->pending++;
    if (c->seq < 8) c->seq++;
    else c->seq = 0;
    c->busy = 1;
    return 0;
}
