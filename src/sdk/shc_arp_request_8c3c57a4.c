/* Builds and sends an ARP request for a target address (Hitachi SHC). */
typedef struct Iface {
    char unknown0[8];
    char addr[4];
    char unknownc[0xc];
    short hwtype;
    unsigned char hwlen;
    char unknown1b;
    char hwaddr[6];
    char gateway[4];
} Iface;

typedef struct ArpHeader {
    short hrd;
    short pro;
    unsigned char hln;
    unsigned char pln;
    short op;
    char data[1];
} ArpHeader;

typedef struct Packet {
    int type;
    char unknown4[4];
    short length;
    char unknowna[2];
    char body[4];
} Packet;

extern ArpHeader g_arp_8c5a23cc;
extern Iface *iface_find_8c3c5c4c(int index);
extern Packet *packet_alloc_8c3c83e4(void);
extern short htons_8c3c8462(int v);
extern void *memcpy(void *, const void *, unsigned long);
extern void packet_set_8c3c867e(char *body, ArpHeader *h);
extern int packet_send_8c3c5cc4(Packet *p, char *dst, int len, int index);
extern void packet_free_8c3c8412(Packet *p);

int arp_request_8c3c57a4(int target, int index)
{
    Iface *f;
    Packet *p;
    char *q;
    unsigned char i;
    ArpHeader *h;

    if ((f = iface_find_8c3c5c4c(index)) == 0) goto fail;
    goto LG2;
LG2: ;
    if ((p = packet_alloc_8c3c83e4()) == 0) goto fail;
    h = &g_arp_8c5a23cc;
    h->hrd = htons_8c3c8462(f->hwtype);
    h->pro = htons_8c3c8462(0x800);
    h->hln = f->hwlen;
    h->pln = 4;
    h->op = htons_8c3c8462(1);
    q = h->data;
    memcpy(q, f->hwaddr, f->hwlen);
    q += f->hwlen;
    goto LG0;
LG0: ;
    memcpy(q, f->addr, 4);
    q += 4;
    for (i = 0; i < f->hwlen; i++) *q++ = 0;
    memcpy(q, &target, 4);
    p->type = 1;
    p->length = (f->hwlen + 4) * 2 + 9;
    packet_set_8c3c867e(p->body, &g_arp_8c5a23cc);
    if (packet_send_8c3c5cc4(p, f->gateway, 4, index) == 0) goto ok;
    goto LG1;
LG1: ;
    packet_free_8c3c8412(p);
fail:
    return -1;
ok:
    packet_free_8c3c8412(p);
    return 0;
}
