typedef struct {
    unsigned char b[8];
    void *p08;
    void *p0c;
    int lo;
    int hi;
    int v18;
    int v1c;
    float rate;
    int v24;
    int v28;
    int v2c;
    int v30;
    int v34;
    int v38;
    int v3c;
    int *buf_a;
    int *buf_b;
    int v48;
    int v4c;
    int v50;
} Pal;
extern int str_8c3f6118[];
extern int *cur_8c548310;
extern int *buf_a_8c5483b4;
extern int *buf_b_8c5483b8;
extern char pool_8c548333[];
extern int d_8c3f6058[];
extern int d_8c3f6098[];
extern unsigned char map_8c3f60d8[];
extern int obj_8c40064c;
extern int obj_8c400698;

static void copy_words_8c359996(int *d, int *s, int n);

int *palette_table_8c3598d0(void)
{
    return str_8c3f6118;
}

void palette_init_8c3598d6(int *buf)
{
    cur_8c548310 = palette_table_8c3598d0();
    if (buf) {
        buf_a_8c5483b4 = buf;
        buf_b_8c5483b8 = buf + 0x10;
    } else {
        int *p = (int *)((int)pool_8c548333 & ~0x1f);
        buf_a_8c5483b4 = p;
        buf_b_8c5483b8 = p + 0x10;
    }
    copy_words_8c359996(buf_a_8c5483b4, d_8c3f6058, 16);
    copy_words_8c359996(buf_b_8c5483b8, d_8c3f6098, 16);
}

void palette_map_8c35991a(char *src, unsigned char *dst)
{
    unsigned char *d = dst;
    char *s = src;
    int i;
    for (i = 0; i < 64; i++) {
        d[i] = map_8c3f60d8[*s++];
    }
}

void palette_reset_8c359934(Pal *pl)
{
    pl->b[0] = 0;
    pl->b[1] = 0;
    pl->b[2] = 0;
    pl->b[3] = 0;
    pl->b[4] = 0;
    pl->b[5] = 0;
    pl->b[6] = 0;
    pl->b[7] = 0;
    pl->p08 = &obj_8c40064c;
    pl->p0c = &obj_8c400698;
    pl->lo = 0x80000000;
    pl->hi = 0x7fffffff;
    pl->v18 = 0;
    pl->v1c = 0;
    pl->rate = 512.5f;
    pl->v24 = 0x100;
    pl->v28 = 0;
    pl->v2c = 0;
    pl->v30 = 0;
    pl->v34 = 0;
    pl->v38 = 0x200;
    pl->v3c = 0x80;
    pl->buf_a = buf_a_8c5483b4;
    pl->buf_b = buf_b_8c5483b8;
    pl->v48 = 0;
    pl->v4c = 0;
    pl->v50 = 0;
}

static void copy_words_8c359996(int *d, int *s, int n)
{
    for (n++; --n != 0;) {
        *d++ = *s++;
    }
}
