typedef struct {
    unsigned int flags;
    int pad04;
    int f08;
    int pad0c[5];
    int f20;
    int pad24[2];
    int f2c;
    int f30;
    int pad34[4];
    int f44;
    int pad48;
    int f4c;
    int pad50;
    int f54;
    int pad58[4];
    int f68;
} Cfg;
typedef struct {
    char pad[0x2e4];
    Cfg cfg;
} Dev;
extern int update_8c3bb160(Cfg *);
extern int debug_print_8c35570c(int, char *, ...);
extern char str_8c3f5680[];
extern char str_8c3f56b4[];

void setup_mode_8c357270(Dev *dev, int mode)
{
    Cfg *s = &dev->cfg;
    int r;
    s->flags = 0x4000;
    if (mode == 1) {
        s->f54 = 2;
    } else {
        s->f54 = 0;
    }
    r = update_8c3bb160(s);
    if (r) {
        debug_print_8c35570c(r, str_8c3f5680);
    }
}

void setup_cfg_8c3572ac(Dev *dev, int arg)
{
    Cfg *s = &dev->cfg;
    int r;
    s->flags = 0;
    s->flags |= 8;
    s->f20 = 3;
    s->flags |= 0x80000;
    s->f68 = arg;
    s->flags |= 0x1000;
    s->f4c = 3;
    s->flags |= 0x40;
    s->f2c = 8;
    s->flags |= 0x80;
    s->f30 = 6;
    s->flags |= 0x200000;
    s->f08 = 2;
    s->flags |= 0x400;
    s->f44 = 1;
    r = update_8c3bb160(s);
    if (r) {
        debug_print_8c35570c(r, str_8c3f56b4);
    }
}
