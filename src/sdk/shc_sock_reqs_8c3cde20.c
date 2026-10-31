/* Socket request handlers (Hitachi SHC): blocking connect/send/resolve requests that
   wait on completion tables, their completion callbacks, and thin request wrappers. */
typedef struct Entry {
    char unknown0[0x138];
    unsigned short state;
    char unknown13a[0x174 - 0x13a];
} Entry;

typedef struct ConnSlot {
    int state;
    int value;
    int done;
    int addr;
    short port;
    short local_port;
} ConnSlot;

typedef struct SendSlot {
    int state;
    int value;
    int id;
} SendSlot;

typedef struct ResSlot {
    int state;
    int value;
} ResSlot;

typedef struct ConnReq {
    short id;
    short unknown2;
    int async;
    int arg;
} ConnReq;

typedef struct IdReq {
    short id;
} IdReq;

typedef struct Info {
    int addr;
    short port;
    short local_port;
} Info;

typedef struct Stat {
    short a;
    short b;
    short c;
    short d;
} Stat;

typedef struct Frag {
    short len;
    short unknown2;
    int data;
} Frag;

typedef struct SendReq {
    short id;
    short unknown2;
    int async;
    char flags;
    char count;
    char unknown0a[2];
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
    Piece piece[12];
} Packet;

typedef struct Addr {
    char *ptr;
    char type;
    char unknown5[3];
} Addr;

typedef struct ResReq {
    short id;
    short unknown2;
    int async;
    char kind;
    char unknown9;
    short port;
    int name;
} ResReq;

extern unsigned char g_count_8c5b857c;
extern Entry *g_entries_8c5b85b0;
extern volatile ConnSlot g_conn_8c5ba424[];
extern volatile SendSlot g_send_8c5ba4c4[];
extern volatile ResSlot g_res_8c5ba524[];
extern int conn_start_8c3cbfac(short, int, int);
extern void sync_close_8c3c8972(void);
extern void sync_idle_8c3c895c(void);
extern void sync_open_8c3c8962(void);
extern void conn_accept_8c3cc088(int);
extern int cb_conn_8c3c4ff0(int, char *, int, int, short, short);
extern void cb_conn_queue_8c3cc0b6(int, int);
extern int tcp_close_8c3c49b0(int);
extern int udp_close_8c3c67ae(int);
extern int sock_close_8c3cc316(short);
extern int sock_shutdown_8c3cc40e(short, int);
extern int sock_abort_8c3cc49a(short);
extern int tcp_info_8c3c4f3e(int, Info *);
extern int sock_info_8c3cc4f4(short, Info *);
extern int sock_stat_8c3cc538(short, Stat *);
extern int sock_error_8c3c9eaa(short);
extern void name_copy_8c3c8686(void *, int);
extern int send_start_8c3cc5f8(short, Packet *, int, char);
extern int cb_send_8c3c5020(int, char *);
extern void cb_send_queue_8c3cc712(int, int);
extern int res_start_8c3cc72c(short, void *, short, int, char);
extern int cb_res_8c3c503e(int, char *, int, int);

int sock_connect_8c3cde20(r, addr, port, local_port)
ConnReq *r;
int *addr;
short *port;
short *local_port;
{
    if (r->id >= g_count_8c5b857c || r->id < 0 || g_entries_8c5b85b0[r->id].state != 1) return -4;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto N1;
N1: ;
    g_conn_8c5ba424[r->id].state = -1;
    if (conn_start_8c3cbfac(r->id, r->async, r->arg) < 0) return -4;
    if (!r->async) goto wait;
    return -1;
wait:
    sync_close_8c3c8972();
    while (g_conn_8c5ba424[r->id].state == -1) sync_idle_8c3c895c();
    sync_open_8c3c8962();
    conn_accept_8c3cc088(g_conn_8c5ba424[r->id].value);
    *addr = g_conn_8c5ba424[r->id].addr;
    *port = g_conn_8c5ba424[r->id].port;
    *local_port = g_conn_8c5ba424[r->id].local_port;
    return g_conn_8c5ba424[r->id].value;
}

int sock_conn_done_8c3cdf10(id, cb, value, addr, port, local_port)
int id;
char *cb;
int value;
int addr;
short port;
short local_port;
{
    if (cb) {
        conn_accept_8c3cc088(value);
        cb_conn_queue_8c3cc0b6(id, cb_conn_8c3c4ff0(id, cb, value, addr, port, local_port));
    } else {
        g_conn_8c5ba424[id].value = value;
        g_conn_8c5ba424[id].done = 1;
        g_conn_8c5ba424[id].addr = addr;
        g_conn_8c5ba424[id].port = port;
        g_conn_8c5ba424[id].local_port = local_port;
        g_conn_8c5ba424[id].state = id;
    }
    return 0;
}

int sock_close_req_8c3cdfae(IdReq *r)
{
    switch (r->id & 0xc0) {
    case 0x80:
        return tcp_close_8c3c49b0(r->id & 0x3f);
    case 0xc0:
        return udp_close_8c3c67ae(r->id & 0x3f);
    default:
        return sock_close_8c3cc316(r->id);
    }
}

int sock_shutdown_req_8c3cdfe6(r)
IdReq *r;
{
    if (sock_shutdown_8c3cc40e(r->id, 1) < 0) return -4;
    return 0;
}

int sock_abort_req_8c3ce00a(r)
IdReq *r;
{
    return sock_abort_8c3cc49a(r->id);
}

int sock_info_req_8c3ce016(r, addr, port, local_port)
IdReq *r;
int *addr;
short *port;
short *local_port;
{
    Info info;

    if (r->id & 0x80) {
        if (tcp_info_8c3c4f3e(r->id & 0x7f, &info) < 0) goto fail;
        *addr = info.addr;
        *port = info.port;
        *local_port = info.local_port;
    } else {
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto N0;
N0: ;
        if (sock_info_8c3cc4f4(r->id, &info) < 0) {
        fail:
            return -4;
        }
        *addr = info.addr;
        *port = info.port;
        *local_port = info.local_port;
    }
    return 0;
}

int sock_stat_req_8c3ce086(r, n, a, b, c)
IdReq *r;
short *n;
short *a;
short *b;
short *c;
{
    Stat st;
    int rc;

    rc = sock_stat_8c3cc538(r->id, &st);
    if (rc < 0) return -4;
    *n = rc;
    *a = st.a;
    *b = st.b;
    *c = st.c;
    switch (sock_error_8c3c9eaa(r->id)) {
    case 0:
        return 0;
    case 4:
        return -11;
    case 6:
        return -7;
    default:
        return -6;
    }
}

int sock_send_req_8c3ce124(r)
SendReq *r;
{
    Packet p;
    int i;
    int rc;

    p.total = 0;
    p.count = r->count;
    if (r->count > 4) return -12;
    r->flags = 0;
    for (i = 0; i < p.count; i++) {
        name_copy_8c3c8686(&p.piece[i].data, r->frag[i].data);
        p.piece[i].len = r->frag[i].len;
        p.total += p.piece[i].len;
    }
    if (p.total == 0) return 0;
    g_send_8c5ba4c4[r->id].state = -1;
    g_send_8c5ba4c4[r->id].id = r->id;
    if ((rc = send_start_8c3cc5f8(r->id, &p, r->async, r->flags)) < 0) return rc;
    if (!r->async) goto wait;
    return -1;
wait:
    sync_close_8c3c8972();
    while (g_send_8c5ba4c4[r->id].state == -1) sync_idle_8c3c895c();
    sync_open_8c3c8962();
    return g_send_8c5ba4c4[r->id].value;
}

int sock_send_done_8c3ce24e(id, cb, value)
int id;
unsigned int cb;
int value;
{
    if (cb) {
        cb = cb_send_8c3c5020(id, (char *)cb);
        cb_send_queue_8c3cc712(id, cb);
    } else {
        g_send_8c5ba4c4[id].value = value;
        g_send_8c5ba4c4[id].state = id;
    }
    return 0;
}

int sock_res_req_8c3ce290(r)
ResReq *r;
{
    Addr buf;
    short rc;
    short port;

    name_copy_8c3c8686(&buf, r->name);
    port = r->port;
    g_res_8c5ba524[r->id].state = -1;
    if ((rc = res_start_8c3cc72c(r->id, &buf, port, r->async, r->kind)) < 0) return rc;
    if (!r->async) goto wait;
    return -1;
wait:
    sync_close_8c3c8972();
    while (g_res_8c5ba524[r->id].state == -1) sync_idle_8c3c895c();
    sync_open_8c3c8962();
    return g_res_8c5ba524[r->id].value;
}

int sock_res_done_8c3ce316(id, cb, value, p)
int id;
char *cb;
int value;
int *p;
{
    char *volatile c = cb;
    int *volatile q = p;

    if (c) {
        cb_res_8c3c503e(id, c, value, *q);
    } else {
        g_res_8c5ba524[id].value = value;
        g_res_8c5ba524[id].state = id;
    }
    return 0;
}
