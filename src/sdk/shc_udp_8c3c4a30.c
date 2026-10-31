/* UDP send/receive and pseudo-header checksum (Hitachi SHC). */
typedef struct Buf {
    int ptr;
    char type;
    char unknown5[3];
} Buf;

typedef struct Piece {
    short len;
    short unknown2;
    Buf buf;
} Piece;

typedef struct Packet {
    int count;
    int total;
    Piece piece[1];
} Packet;

typedef struct Sock {
    char unknown0[8];
    short used;
    char unknownA;
    char raw;
    short local_port;
    short remote_port;
    short len;
    short cksum;
    char bound;
    char connected;
    char unknown16[2];
    int addr;
    char unknown1C[8];
    int arg;
    char unknown28[4];
    char p2c;
    char p2d;
    char p2e;
    char unknown2F;
} Sock;

typedef struct Pseudo {
    int src;
    int dst;
    char zero;
    char proto;
    short len;
} Pseudo;

typedef struct Udp {
    short src_port;
    short dst_port;
    short len;
    short cksum;
} Udp;

typedef struct Iter {
    char data[8];
} Iter;

extern Sock *g_socks_8c5b85b4;
extern unsigned char g_nsocks_8c5b857d;
extern int udp_ready_8c3c5eb0(void);
extern void msg_sequence_8c3c8692(Buf *b, int n);
extern int route_8c3c7ca4(int addr);
extern short htons_8c3c8462(int v);
extern void packet_set_8c3c867e(void *dst, void *src);
extern int htonl_8c3c8440(int v);
extern int iface_addr_8c3c7d02(int h);
extern int ip_send_8c3c68d8(Packet *p, int dst, int a, int b, int c, int d, int e, int f, int g, int h);
extern void *memcpy(void *, const void *, unsigned long);
extern int buf_ptr_8c3c868e(Buf *b);
extern void msg_send_8c3c8474(void *it, Buf *b, int n);
extern int sock_deliver_8c3ce8c4(Packet *p, int src, int port, int arg, int i);
extern int icmp_unreach_8c3c72ee(int a, int b);
extern unsigned int sum_8c3c86b6(int sum, Packet *p, int flag);

static unsigned short udp_cksum_8c3c4d84(Pseudo *ph, Packet *p, int flag);

int packet_send_8c3c4a30(Packet *pkt, int dst, short port, int idx)
{
    Sock *s;
    Sock *t;
    int h;
    int n;
    int to;
    char *c;
    unsigned short sum;
    Pseudo ph;

    if (0) pkt++;
    if (udp_ready_8c3c5eb0() == -1) goto fail;
    t = &g_socks_8c5b85b4[idx];
    if (t->raw) {
        pkt->total -= 0x2a;
        pkt->piece[pkt->count - 1].len -= 0x2a;
        msg_sequence_8c3c8692(&pkt->piece[pkt->count - 1].buf, 0x2a);
    }
    if (idx >= g_nsocks_8c5b857d || idx < 0 || g_socks_8c5b85b4[idx].used == 0) goto fail;
    s = &g_socks_8c5b85b4[idx];
    if (s->bound == 0) s->addr = dst;
    to = s->addr;
    if (s->connected == 0) s->remote_port = port;
    if ((h = route_8c3c7ca4(to)) == 0) goto fail;
    if (0) s->addr = dst;
    s->len = htons_8c3c8462(pkt->total + 8);
    n = pkt->count;
    pkt->piece[n].len = 8;
    pkt->total += 8;
    packet_set_8c3c867e(&pkt->piece[n].buf, &s->local_port);
    pkt->count++;
    if (to == htonl_8c3c8440(0x7f000001))
        ph.src = htonl_8c3c8440(0x7f000001);
    else
        ph.src = iface_addr_8c3c7d02(h);
    ph.dst = to;
    ph.zero = 0;
    ph.proto = 0x11;
    ph.len = htons_8c3c8462(pkt->total);
    s->cksum = 0;
    c = (char *)&s->cksum;
    sum = udp_cksum_8c3c4d84(&ph, pkt, 1);
    *c = sum >> 8;
    c++;
    *c = sum;
    if (ip_send_8c3c68d8(pkt, to, s->raw, s->p2e, s->p2c, s->p2d, 0, 0, 0x11, 0) == 0) goto ok;
fail:
    return -1;
ok:
    return 0;
}

int udp_input_8c3c4bda(Packet *pkt, unsigned short len, int src, int dst)
{
    Udp hdr;
    Pseudo ph;
    Iter it;
    char saved[8];
    Udp *u;
    int i;
    Sock *s;

    pkt->total -= len;
    pkt->piece[0].len -= len;
    memcpy(saved, &pkt->piece[0].buf, 8);
    msg_sequence_8c3c8692(&pkt->piece[0].buf, len);
    if (pkt->piece[0].buf.type == 1) {
        u = (Udp *)buf_ptr_8c3c868e(&pkt->piece[0].buf);
    } else {
        packet_set_8c3c867e(&it, &hdr);
        msg_send_8c3c8474(&it, &pkt->piece[0].buf, 8);
        u = &hdr;
    }
    if (u->cksum != 0) {
        ph.src = src;
        ph.dst = dst;
        ph.zero = 0;
        ph.proto = 0x11;
        ph.len = htons_8c3c8462(pkt->total);
        if (udp_cksum_8c3c4d84(&ph, pkt, 0) != 0) goto fail;
    }
    for (i = 0; i < g_nsocks_8c5b857d; i++) {
        s = &g_socks_8c5b85b4[i];
        if (s->used == 0) continue;
        if (s->local_port != u->dst_port) continue;
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto next1;
    next1:
        if (s->bound != 0) {
            if (s->addr != src) continue;
        }
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto next2;
    next2:
        if (s->connected && s->remote_port != u->src_port) continue;
        if (s->raw) {
            pkt->total += len;
            pkt->piece[0].len += len;
            memcpy(&pkt->piece[0].buf, saved, 8);
        } else {
            pkt->total -= 8;
            pkt->piece[0].len -= 8;
            msg_sequence_8c3c8692(&pkt->piece[0].buf, 8);
        }
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto next3;
    next3:
        if (sock_deliver_8c3ce8c4(pkt, src, u->src_port, s->arg, i) == 0) return 0;
    fail:
        return -1;
    }
    if (icmp_unreach_8c3c72ee(dst, 0) == 1) return 0;
    return -2;
}

static unsigned short udp_cksum_8c3c4d84(Pseudo *ph, Packet *p, int flag)
{
    unsigned int sum;
    unsigned char *q;
    int n;
    unsigned int v;

    sum = 0;
    if (ph) {
        q = (unsigned char *)ph;
        for (n = 0; n < 6; n++) {
            unsigned short w = (q[0] << 8) + q[1];
            sum += w;
            q += 2;
        }
    }
    v = sum_8c3c86b6(sum, p, flag);
    v = (v >> 16) + (v & 0xffff);
    v += v >> 16;
    return ~v;
}
