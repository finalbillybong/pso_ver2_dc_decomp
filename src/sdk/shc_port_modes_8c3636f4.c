/* SHC pool group 0x8c363568-0x8c363908 (closed span of the modem port file):
   entry-table scans under the port lock, entry state setters, mode/phase
   changes and checked slot wrappers. */
typedef struct Entry {
    int state;
    int unknown4;
    int key;
    char unknownc[0x48 - 0xc];
} Entry;

typedef struct Info {
    char unknown0[0x1c];
    int count;
} Info;

typedef struct Table {
    int unknown0;
    Info info;
    char unknown24[0x34 - 0x24];
    int primary;
    int fallback;
    char unknown3c[0xa4 - 0x3c];
    Entry entries[1];
} Table;

typedef struct Port {
    int cfg[15];
    int arg;
    int state;
    int phase;
    int flag48;
    char unknown4c[0x2774 - 0x4c];
    char audio[0x1000];
} Port;

extern void lock_8c360db4(int *);
extern void unlock_8c360dcc(int *);
extern int port_invalid_8c360d92(Port *);
extern int send_code_8c360c8c(int, int);
extern void call_8c3655bc(Port *, int);
extern int request_8c365d70(Port *, int, int, int, int);
extern void call_8c3659d2(Port *, int);
extern void dev_set_pitch_8c36442c(Port *, int);
extern void set_slot_8c364b3c(Port *, int, int);

int port_apply_8c363768(Port *p, int m);
int port_request_8c3637aa(Port *p, int m);
int port_set_phase3_8c3637fa(Port *p);

int port_flag_8c3636f4(Port *p)
{
    if (port_invalid_8c360d92(p)) return send_code_8c360c8c(0, 0xff000141);
    return p->flag48;
}

int port_set_flag_8c36371c(Port *p, int v)
{
    int old, m, r;
    if (port_invalid_8c360d92(p)) return send_code_8c360c8c(0, 0xff000142);
    old = p->flag48;
    if (v == 0) m = 0;
    else if (old == 0) m = 1;
    else m = 2;
    p->flag48 = v;
    r = port_apply_8c363768(p, m);
    return r;
}

int port_apply_8c363768(Port *p, int m)
{
    int st = p->phase;
    int r;
    if (m == 2 && p->state != 4) return 0;
    if (st != 3 && st != 4) return 0;
    if (0) r++;
    call_8c3655bc(p, m);
    r = port_request_8c3637aa(p, m);
    return r;
}

int port_request_8c3637aa(Port *p, int m)
{
    int r;
    if ((r = request_8c365d70(p, 7, 8, m, 0)) != 0) return r;
    return 0;
}

int port_stop_8c3637d8(Port *p)
{
    if (port_invalid_8c360d92(p)) return send_code_8c360c8c(0, 0xff000143);
    return port_set_phase3_8c3637fa(p);
}

int port_set_phase3_8c3637fa(Port *p)
{
    p->phase = 3;
    return 0;
}

int port_config_8c363804(Port *p, int v)
{
    if (port_invalid_8c360d92(p)) return send_code_8c360c8c(0, 0xff000144);
    call_8c3659d2(p, v);
    dev_set_pitch_8c36442c(p, v);
    return 0;
}

int port_slot30_8c363840(Port *p, int v)
{
    if (port_invalid_8c360d92(p)) return send_code_8c360c8c(0, 0xff000145);
    if (p->state != 1) send_code_8c360c8c(0, 0xff000211);
    set_slot_8c364b3c(p, 30, v);
    return 0;
}

int port_slot29_8c363886(Port *p, int v)
{
    if (port_invalid_8c360d92(p)) return send_code_8c360c8c(0, 0xff000146);
    if (p->state != 1) send_code_8c360c8c(0, 0xff000212);
    set_slot_8c364b3c(p, 29, v);
    return 0;
}
