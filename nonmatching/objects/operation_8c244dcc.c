/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c244dcc
 * function: operation_8c244dcc
 * language: c
 * reference size: 1000 bytes
 * compiled size: 1000 bytes (+0.0%)
 * differing lines: 198 of 426 reference instruction lines
 * differing bytes: 203
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Hdr { int f00; int f04; int f08; } Hdr;
typedef struct Rec {
    int f00;
    short f04, f06, f08, f0a, f0c, f0e;
    unsigned char f10, f11;
    short f12;
    int f14;
} Rec;
typedef struct Ent { int f00; short f04, f06, f08, f0a; int f0c; int f10; } Ent;
extern Hdr *g_e28;
extern int g_e4c;
extern char *g_e34;
extern char *g_e3c;
extern int g_e40;
extern char *g_e44;
extern int g_e48;
extern unsigned int g_eca0[0x12];
extern char *g_ec54;
extern void memset_8c12b880(void *, int, int);
extern int operation_8c2451b4(int, int);
extern void operation_8c24554c(short);
extern int operation_8c245260(void *);
extern void operation_8c2455e4(void *);
extern void operation_8c245618(void *);
extern int operation_8c14f8c4(void);
extern void call_8c3889a4(void *, void *, int);
extern char *operation_8c186ddc(int, int);
void operation_8c244dcc(int a0)
{
    char type;
    int val;
    int hdr[4];
    Hdr *h = g_e28;
    Rec *r = (Rec *)((char *)h + h->f04);
    int extra = g_e4c - (h->f08 * 0x18 + 0x10);
    int n;
    int i;
    memset_8c12b880(g_e34, 0, 0x9000);
    memset_8c12b880(g_e3c, 0, 0x1400);
    g_e40 = 0;
    memset_8c12b880(g_e44, 0, 0x1000);
    n = 0;
    g_e48 = 0;
    for (i = 0; i < h->f08; i++) {
        int cnt = operation_8c2451b4(1, r->f12 + 1);
        short k = r->f0a;
        short base = r->f00;
        while (cnt-- > 0) {
            int m = operation_8c2451b4(r->f10, r->f11 + 1);
            operation_8c24554c(r->f08);
            while (m-- > 0) {
                int off = n * 0x48;
                if (operation_8c245260(g_e34 + off) == 0) {
                    n++;
                    *(short *)((char *)(g_e34 + 0xe) + off) = k;
                    *(short *)((char *)(g_e34 + 0xc) + off) = r->f08;
                }
            }
            if (cnt > 0) {
                *(int *)((char *)(g_e3c + 0x0) + g_e40 * 0x14) = base;
                *(short *)((char *)(g_e3c + 0x4) + g_e40 * 0x14) = r->f04;
                *(short *)((char *)(g_e3c + 0x6) + g_e40 * 0x14) = r->f06;
                *(short *)((char *)(g_e3c + 0x8) + g_e40 * 0x14) = r->f08;
                *(short *)((char *)(g_e3c + 0xa) + g_e40 * 0x14) = k;
                *(int *)((char *)(g_e3c + 0xc) + g_e40 * 0x14) = operation_8c2451b4(r->f0c, r->f0e + 1);
                *(int *)((char *)(g_e3c + 0x10) + g_e40 * 0x14) = extra + g_e48;
                base = r->f00 + 0x2710 + k;
                type = 0xc;
                operation_8c2455e4(&type);
                val = (unsigned short)base;
                operation_8c245618(&val);
                type = 1;
                operation_8c2455e4(&type);
                k++;
                g_e40++;
            }
        }
        *(int *)((char *)(g_e3c + 0x0) + g_e40 * 0x14) = base;
        *(short *)((char *)(g_e3c + 0x4) + g_e40 * 0x14) = r->f04;
        *(short *)((char *)(g_e3c + 0x6) + g_e40 * 0x14) = r->f06;
        *(short *)((char *)(g_e3c + 0x8) + g_e40 * 0x14) = r->f08;
        *(short *)((char *)(g_e3c + 0xa) + g_e40 * 0x14) = k;
        *(int *)((char *)(g_e3c + 0xc) + g_e40 * 0x14) = operation_8c2451b4(r->f0c, r->f0e + 1);
        *(int *)((char *)(g_e3c + 0x10) + g_e40 * 0x14) = r->f14;
        r++;
        g_e40++;
    }
    if (n > 0) {
        char *src = g_e34;
        unsigned int sum = 0;
        int j;
        unsigned int size;
        unsigned int t;
        for (j = 0; j < 0x12; j++)
            sum += *(unsigned int *)((char *)g_eca0 + (j << 2));
        size = n * 0x48;
        t = size / 0x48;
        sum += t;
        if (!(sum > 0x5a8)) {
            call_8c3889a4(g_ec54 + operation_8c14f8c4() * 0x48, src, size);
            *(unsigned int *)((char *)g_eca0 + (a0 << 2)) = t;
        }
    }
    if (g_e40 > 0) {
        int pad = (unsigned int)(g_e48 + 3) >> 2 << 2;
        char *dst = operation_8c186ddc(a0, extra + (g_e40 * 0x14 + 0x10) + pad);
        if (dst != 0) {
            hdr[1] = 0x10;
            hdr[2] = g_e40;
            hdr[0] = g_e40 * 0x14 + 0x10;
            call_8c3889a4(dst, hdr, 0x10);
            if (g_e40 > 0) {
                dst += 0x10;
                call_8c3889a4(dst, g_e3c, g_e40 * 0x14);
            }
            if (extra > 0) {
                dst += g_e40 * 0x14;
                call_8c3889a4(dst, (char *)g_e28 + h->f00, extra);
            }
            if (pad > 0)
                call_8c3889a4(dst + extra, g_e44, pad);
        }
    }
}
