typedef struct {
    int v00, v04, v08, v0c, v10, v14, v18, v1c, v20;
} Cfg9;
typedef struct {
    char pad[0x2774];
    char area[0x1000];
} Dev;
extern Cfg9 cfg_8c55f398;
extern int port_invalid_8c360d92(Dev *);
extern int send_code_8c360c8c(Dev *, int);
extern int func_8c35c100(int, int, int);
extern int func_8c363568(Dev *);
extern int func_8c35bb70(int, void *);
extern char buf_8c54b398[];
extern void func_8c359bac(Cfg9 *, int, int);

int modem_probe_8c361c4c(void);

void modem_set_cfg_8c361b44(Cfg9 *src)
{
    Cfg9 *d = &cfg_8c55f398;
    d->v00 = src->v00;
    d->v04 = src->v04;
    d->v08 = src->v08;
    d->v0c = src->v0c;
    d->v10 = (src->v10 + 0x1f) & ~0x1f;
    d->v14 = src->v14;
    d->v18 = src->v18;
    d->v1c = src->v1c;
    d->v20 = (src->v20 + 0x1f) & ~0x1f;
}

int modem_send_8c361b76(Dev *p, int a, int b)
{
    int h;
    int r;
    if (p == 0) {
        h = 0;
    } else {
        char *q;
        if (port_invalid_8c360d92(p)) {
            return send_code_8c360c8c(0, 0xff000181);
        }
        q = p->area + 0xa80;
        {
            int *hp = (int *)(q + 8);
            h = *hp;
        }
    }
    r = func_8c35c100(h, a, b);
    if (r) {
        return send_code_8c360c8c(p, 0xff000f12);
    }
    return 0;
}

int modem_status_8c361bce(p, out)
Dev *p;
int *out;
{
    *out = 0;
    if (port_invalid_8c360d92(p)) {
        return send_code_8c360c8c(0, 0xff000182);
    }
    *out = func_8c363568(p);
    return 0;
}

int modem_init_8c361c0a(void)
{
    int r;
    if (modem_probe_8c361c4c()) {
        for (;;) {
        }
    }
    r = func_8c35bb70(8, buf_8c54b398);
    if (r) {
        int e;
        if (r == 0xff03ff05) {
            e = 0xff000f13;
        } else {
            e = 0xff000f01;
        }
        return send_code_8c360c8c(0, e);
    }
    func_8c359bac(&cfg_8c55f398, 0, 9);
    return 0;
}

int modem_probe_8c361c4c(void)
{
    return 0;
}
