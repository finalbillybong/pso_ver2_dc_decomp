/* SHC pool group 0x8c360314-0x8c3604dc (modem port file): slot 0x31
   enable/query and a 32-entry byte-count history ring with a scaled
   look-back search under the port lock. */
typedef struct Sub {
    char unknown0[0x24];
    int scale;
} Sub;

typedef struct Ring {
    char unknown0[0xb8];
    Sub sub;
    char unknowne0[0xec - 0xe0];
    int total;
    int head;
    int hist[32];
} Ring;

typedef struct Port {
    char unknown0[0xa74];
    Ring ring;
} Port;

extern int port_invalid_8c360d92(Port *);
extern int send_code_8c360c8c(int, int);
extern int set_slot_8c364b3c(Port *, int, int);
extern int get_slot_8c364c24(Port *, int);
extern void lock_8c360db4(int *);
extern void unlock_8c360dcc(int *);
extern int call_8c3650c0(Port *, int *, int *);
extern int scale_8c35e570(int, int, int);

int rate_enable_8c360314(Port *p)
{
    if (port_invalid_8c360d92(p)) return send_code_8c360c8c(0, 0xff000161);
    set_slot_8c364b3c(p, 0x31, 1);
    return 0;
}

int rate_enabled_8c360340(Port *p)
{
    if (get_slot_8c364c24(p, 6) == 1) goto no;
    if (get_slot_8c364c24(p, 0x31)) goto yes;
no:
    return 0;
yes:
    return 1;
}

void rate_add_8c36036e(Port *p, int n)
{
    int lk;
    Ring *r = &p->ring;
    int h;
    lock_8c360db4(&lk);
    r->total += n;
    h = r->head + 1;
    r->hist[h % 32] = r->total;
    r->head = h;
    unlock_8c360dcc(&lk);
}

int rate_query_8c3603c6(Port *p, int *a, int *b, int *c)
{
    int lk;
    Ring *r;
    int res, scale, k, h, v;
    if (port_invalid_8c360d92(p)) return send_code_8c360c8c(0, 0xff000162);
    r = &p->ring;
    {
        Sub *sp = &r->sub;
        scale = sp->scale;
    }
    *c = 0;
    res = call_8c3650c0(p, a, b);
    if (r->total != 0 && *b != 1) {
        if (0) { r++; r++; }
        lock_8c360db4(&lk);
        h = r->head;
        for (k = 0; k < 32; k++, h--) {
            if (0) { h++; h++; }
            {
                int x = r->hist[h % 32];
                v = scale_8c35e570(x, *b, scale);
            }
            if (v <= *a) break;
        }
        *c = h;
        *a = *a - v;
        if (*a < 0) *a = 0;
        unlock_8c360dcc(&lk);
    }
    return res;
}
