typedef struct {
    unsigned int flags;
    int f04, f08, f0c, f10, f14, f18, f1c, f20, f24, f28, f2c, f30, f34, f38, f3c;
    int f40, f44, f48, f4c, f50, f54, f58, f5c, f60, f64, f68, f6c;
    float g70, g74, g78, g7c, g80, g84, g88, g8c;
} Cfg;
typedef struct {
    int pad[6];
    int mode;
} Src;
extern int update_8c3bb160(Cfg *);
extern int debug_print_8c35570c(int, char *, ...);
extern char str_8c3f5640[];

int cfg_default_8c357124(Cfg *c)
{
    c->flags = 0x3f3ffff;
    c->f04 = 0;
    c->f08 = 0;
    c->f0c = 0;
    c->f40 = 1;
    c->f10 = 0;
    c->f14 = 4;
    c->f18 = 0;
    c->f1c = 0;
    c->f20 = 3;
    c->f24 = 0;
    c->f28 = 0;
    c->f2c = 10;
    c->f30 = 11;
    c->f34 = 0;
    c->f38 = 0;
    c->f3c = 2;
    c->f40 = 1;
    c->f44 = 1;
    c->f50 = 0;
    c->f4c = 0;
    c->f54 = 2;
    c->f58 = 0;
    c->f5c = 4;
    c->f60 = 3;
    c->f64 = 0;
    c->f68 = 0;
    c->g70 = 1.0f;
    c->g74 = 1.0f;
    c->g78 = 1.0f;
    c->g7c = 1.0f;
    c->g80 = 0.0f;
    c->g84 = 0.0f;
    c->g88 = 0.0f;
    c->g8c = 0.0f;
    return update_8c3bb160(c);
}

int cfg_mono_8c3571aa(int unused, Cfg *c)
{
    cfg_default_8c357124(c);
    c->flags = 0;
    c->flags |= 8;
    c->f20 = 3;
    c->flags |= 0x1000;
    c->f4c = 3;
    return update_8c3bb160(c);
}

void cfg_from_src_8c3571d4(Src *s, Cfg *c)
{
    int m;
    int r;
    m = s->mode;
    c->flags = 0x2200c0;
    if (m == 0) {
        c->f08 = 0;
        c->f60 = 1;
        c->f2c = 10;
        c->f30 = 11;
    } else {
        c->f08 = 2;
        c->f60 = 3;
        if (m == 1) {
            c->f2c = 8;
            goto set10;
        }
        if (m == 2) {
            c->f2c = 8;
            c->f30 = 6;
            goto done;
        }
        if (m == 3) {
            c->f2c = 6;
            c->f30 = 8;
            goto done;
        }
        if (m == 4) {
            c->f2c = 2;
            /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
            goto next4;
next4:
            goto set10;
        }
        if (m == 5) {
            c->f2c = 4;
set10:
            c->f30 = 10;
        }
    }
done:
    r = update_8c3bb160(c);
    if (r) {
        debug_print_8c35570c(r, str_8c3f5640);
    }
}
