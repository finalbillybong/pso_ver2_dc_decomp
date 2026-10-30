/* SDK pool group 0x8c3ce374-0x8c3ce660 (Hitachi SHC): socket request
   handlers - blocking resolve with a completion table, completion
   callback, and thin wrappers translating request blocks to calls. */
typedef struct Slot {
    int state;
    int result;
    int value;
    int id;
} Slot;

typedef struct ResolveReq {
    short id;
    short kind;
    int name;
    int async;
} ResolveReq;

typedef struct PortReq {
    short id;
    short port;
    short count;
    short unknown6;
    int addr;
} PortReq;

typedef struct OpenReq {
    int addr;
    short port;
    short local_port;
    char a;
    char b;
    char c;
    char d;
    short timeout;
    short unknown0e;
    int x;
    int y;
    int z;
} OpenReq;

typedef struct Frag {
    short len;
    short unknown2;
    int data;
} Frag;

typedef struct SendReq {
    short flags;
    short unknown2;
    int dest;
    short port;
    char count;
    char unknown0b;
    Frag frag[1];
} SendReq;

typedef struct Piece {
    short len;
    short unknown2;
    int data;
    int unknown8;
} Piece;

typedef struct Packet {
    int count;
    int total;
    Piece piece[1];
} Packet;

typedef struct SendToReq {
    int handle;
    short port;
    short unknown6;
    int addr;
    int len;
} SendToReq;

extern volatile Slot g_slots_8c5ba564[];
extern void name_copy_8c3c8686(void *, int);
extern int resolve_start_8c3cc7fc(short, void *, short, int);
extern void lock_8c3c8972(void);
extern void yield_8c3c895c(void);
extern void unlock_8c3c8962(void);
extern int cb_start_8c3c5060(int, int, int);
extern void cb_queue_8c3cc8d8(int, int);
extern int port_close_8c3cc92e(short, short);
extern int port_bind_8c3cc228(short, short, int, short);
extern int port_peek_8c3cc2ba(short, short, int, int *);
extern int sock_create_8c3c48b0(int, short, short, char, char, char, char, short, int, int, int);
extern Packet *packet_alloc_8c3c83e4(void);
extern int packet_send_8c3c4a30(Packet *, int, short, int);
extern void packet_free_8c3c8412(Packet *);
extern int sock_sendto_8c3c66ac(int, short, int, int);

int sock_resolve_8c3ce374(r, out)
ResolveReq *r;
short *out;
{
    char buf[8];
    int rc;

    name_copy_8c3c8686(buf, r->name);
    g_slots_8c5ba564[r->id].state = -1;
    g_slots_8c5ba564[r->id].id = r->id;
    if ((rc = resolve_start_8c3cc7fc(r->id, buf, r->kind, r->async)) < 0) return rc;
    if (!r->async) goto wait;
    return -1;
wait:
    lock_8c3c8972();
    while (g_slots_8c5ba564[r->id].state == -1) yield_8c3c895c();
    unlock_8c3c8962();
    *out = g_slots_8c5ba564[r->id].value;
    if (g_slots_8c5ba564[r->id].result == 0) return -8;
    return g_slots_8c5ba564[r->id].result;
}

int sock_complete_8c3ce424(id, cb, result, value)
int id;
char *cb;
int result;
int value;
{
    if (cb) {
        cb = (char *)cb_start_8c3c5060(id, (int)cb, !result ? -8 : result);
        cb_queue_8c3cc8d8(id, (int)cb);
    } else {
        g_slots_8c5ba564[id].result = result;
        g_slots_8c5ba564[id].value = value;
        g_slots_8c5ba564[id].state = id;
    }
    return 0;
}

int sock_unsupported_8c3ce474(void)
{
    return 0xfff0;
}

int port_close_req_8c3ce47a(r)
PortReq *r;
{
    return port_close_8c3cc92e(r->id, r->port);
}

int port_bind_req_8c3ce48c(PortReq *r)
{
    int rc;
    if ((rc = port_bind_8c3cc228(r->id, r->port, r->addr, r->count)) < 0) return rc;
    return 0;
}

int port_peek_req_8c3ce4b8(PortReq *r)
{
    int v;
    int rc;
    v = r->count;
    if ((rc = port_peek_8c3cc2ba(r->id, r->port, r->addr, &v)) < 0) return rc;
    return v;
}

int sock_create_req_8c3ce4ec(OpenReq *r)
{
    int rc;
    rc = sock_create_8c3c48b0(r->addr, r->port, r->local_port, r->a, r->b, r->c, r->d,
                              r->timeout, r->x, r->y, r->z);
    if (rc < 0) return rc;
    return rc | 0x80;
}

int sock_send_req_8c3ce576(SendReq *r)
{
    Packet *p;
    unsigned int i;
    int k;
    int rc;

    p = packet_alloc_8c3c83e4();
    i = r->count;
    p->count = i;
    p->total = 0;
    for (k = 0; i > 0; k++) {
        i--;
        name_copy_8c3c8686(&p->piece[k].data, r->frag[i].data);
        p->piece[k].len = r->frag[i].len;
        p->total += p->piece[k].len;
    }
    rc = packet_send_8c3c4a30(p, r->dest, r->port, r->flags & 0x7f);
    packet_free_8c3c8412(p);
    if (rc) return 0xfff0;
    return 0;
}

int sock_sendto_req_8c3ce618(SendToReq *r)
{
    int rc;
    rc = sock_sendto_8c3c66ac(r->handle, r->port, r->addr, r->len);
    if (rc < 0) return rc;
    return rc | 0xc0;
}
