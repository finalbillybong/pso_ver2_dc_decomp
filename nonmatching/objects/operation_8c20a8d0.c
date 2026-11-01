/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20a8d0
 * function: operation_8c20a8d0
 * language: c
 * reference size: 1228 bytes
 * compiled size: 1228 bytes (+0.0%)
 * differing lines: 98 of 399 reference instruction lines
 * differing bytes: 100
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Res {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
} Res;
typedef struct Rec {
    char f00;
    char unknown1[0x17];
} Rec;
typedef struct Slot {
    char *p;
    int n;
} Slot;
typedef struct Quad {
    float a;
    float b;
    float c;
    float d;
} Quad;
extern int g_8c467188;
extern int g_8c5051e0;
extern void *g_8c5051e4;
extern void *g_8c5051e8;
extern Rec *g_8c5051ec;
extern Rec **g_8c5051f0;
extern Slot *g_8c5051f4;
extern char *g_8c5051f8;
extern short g_8c5051fc;
extern int g_8c505200;
extern int g_8c505204;
extern int g_8c505208;
extern int g_8c50520c;
extern int g_8c505210;
extern int g_8c505214;
extern int g_8c505218;
extern int g_8c50521c;
extern int g_8c505220;
extern int g_8c505224;
extern Res *g_8c505228;
extern Res *g_8c50522c;
extern Res *g_8c505230;
extern Res *g_8c505234;
extern Res *g_8c505238;
extern float g_8c2e15d8[];
extern float g_8c2e1534;
extern float g_8c2e1548;
extern float g_8c2e154c;
extern char g_8c2e15a0[];
extern char g_8c335efc[];
extern char g_8c504fe0[];
extern Res *load_named_resource_8c104f68(void *);
extern void *operator_new_8c18de4c(int);
extern void memset_8c12b880(void *, int, int);
extern void call_8c210a0c(void);
extern void call_8c20a80c(void *, float, float, float);
void operation_8c20a8d0(void)
{
    Res *r;
    int i;
    Quad *q;
    int k;
    int m;
    char *p;
    float x0;
    float x1;
    float y;
    float dy;
    float sc;
    int j;
    g_8c5051e0 = g_8c467188;
    g_8c505200 = 0;
    g_8c505204 = 0;
    g_8c505208 = 0;
    g_8c50520c = 0;
    g_8c505218 = 0;
    g_8c50521c = 0;
    g_8c505220 = 0;
    g_8c505224 = 0;
    g_8c505228 = 0;
    g_8c50522c = 0;
    g_8c505230 = 0;
    g_8c505234 = 0;
    g_8c505238 = 0;
    if (g_8c5051e0 < 0 || g_8c5051e0 >= 5) {
        g_8c5051e0 = 0;
    }
    switch (g_8c5051e0) {
    case 0:
        r = load_named_resource_8c104f68(g_8c335efc + 0x16);
        g_8c505228 = r;
        g_8c505200 = r->f00;
        g_8c505204 = r->f04;
        g_8c505208 = r->f08;
        g_8c50520c = r->f0c;
        g_8c505210 = 0x8b;
        g_8c505214 = 6;
        break;
    case 1:
    default:
        r = load_named_resource_8c104f68(g_8c335efc + 0x25);
        g_8c50522c = r;
        g_8c505200 = r->f00;
        g_8c505204 = r->f04;
        g_8c505208 = r->f08;
        g_8c50520c = r->f0c;
        g_8c505218 = r->f10;
        g_8c505220 = r->f14;
        g_8c50521c = r->f18;
        g_8c505210 = 0x93;
        g_8c505214 = 7;
        break;
    case 4:
        r = load_named_resource_8c104f68(g_8c335efc + 0x34);
        g_8c505230 = r;
        g_8c505200 = r->f00;
        g_8c505204 = r->f04;
        g_8c505208 = r->f08;
        g_8c50520c = r->f0c;
        g_8c505218 = r->f10;
        g_8c505220 = r->f18;
        g_8c50521c = r->f14;
        g_8c505224 = r->f20;
        g_8c505210 = 0x91;
        g_8c505214 = 7;
        break;
    case 2:
        r = load_named_resource_8c104f68(g_8c335efc + 0x43);
        g_8c505234 = r;
        g_8c505200 = r->f00;
        g_8c505204 = r->f04;
        g_8c505208 = r->f08;
        g_8c50520c = r->f0c;
        g_8c505218 = r->f10;
        g_8c50521c = r->f14;
        g_8c505220 = r->f18;
        g_8c505210 = 0x91;
        g_8c505214 = 7;
        break;
    case 3:
        r = load_named_resource_8c104f68(g_8c335efc + 0x52);
        g_8c505238 = r;
        g_8c505200 = r->f00;
        g_8c505204 = r->f04;
        g_8c505208 = r->f08;
        g_8c50520c = r->f0c;
        g_8c505218 = r->f10;
        g_8c505220 = r->f18;
        g_8c50521c = r->f14;
        g_8c505210 = 0x93;
        g_8c505214 = 7;
        break;
    }
    g_8c5051e4 = operator_new_8c18de4c(0x80);
    g_8c5051e8 = operator_new_8c18de4c(0x80);
    memset_8c12b880(g_8c5051e4, 0, 0x80);
    memset_8c12b880(g_8c5051e8, 0, 0x80);
    g_8c5051ec = operator_new_8c18de4c(0x120);
    memset_8c12b880(g_8c5051ec, 0, 0x120);
    g_8c5051f0 = operator_new_8c18de4c(0x30);
    for (i = 0; i < 12; i++) {
        *(Rec **)((char *)g_8c5051f0 + (i << 2)) = g_8c5051ec + i;
        (*(Rec **)((char *)g_8c5051f0 + (i << 2)))->f00 = 0;
    }
    g_8c5051f8 = operator_new_8c18de4c(0xc0);
    g_8c5051f4 = operator_new_8c18de4c(0x28);
    p = g_8c5051f8;
    for (j = 0; j < 5; j++) {
        *(char **)((char *)g_8c5051f4 + (j << 3)) = p;
        *(int *)((char *)&g_8c5051f4->n + (j << 3)) = 0;
        if (j == 0) {
            p += 0x40;
        } else {
            p += 0x20;
        }
    }
    g_8c5051fc = -1;
    call_8c210a0c();
    for (k = 0; k < 6; k++) {
        call_8c20a80c(g_8c504fe0 + (k << 6), *(float *)((char *)g_8c2e15a0 + (k << 3)), *(float *)((char *)(g_8c2e15a0 + 0x4) + (k << 3)), *(float *)((char *)g_8c2e15d8 + (k << 2)));
    }
    sc = g_8c2e1534;
    x1 = (*(float *)(g_8c2e15a0 + 0x30) + g_8c2e1548) * sc;
    x0 = *(float *)(g_8c2e15a0 + 0x30) * sc;
    y = *(float *)(g_8c2e15a0 + 0x34) * sc;
    dy = g_8c2e154c * sc;
    q = (Quad *)(g_8c504fe0 + 0x180);
    for (m = 0; m < 4; m++) {
        q->a = x0;
        q->b = y;
        q->c = x1;
        q->d = y;
        q++;
        y += dy;
    }
}
