/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c224ddc
 * function: operation_8c224ddc
 * language: c
 * reference size: 468 bytes
 * compiled size: 468 bytes (+0.0%)
 * differing lines: 100 of 204 reference instruction lines
 * differing bytes: 77
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order; review found and
 *   fixed behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Rect {
    char unknown0[0x8];
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    char unknown1c[0x10];
    int f2c;
    char unknown30[0x4];
    int f34;
} Rect;
typedef struct Pair {
    Rect *f00;
    Rect *f04;
} Pair;
typedef struct Object {
    char unknown0[0x2c];
    char f2c[0x4];
    Pair *f30;
} Object;
extern char *g_8c5059a0;
extern void normalize_rectangle_fields(Rect *, float, float);
extern int call_8c21f468(void);
extern void operation_8c1a6810(Rect *, int, int, int);
extern void draw_view_nodes(Object *, void *, int);
extern void call_8c1a661c(Rect *, Rect *, int, int, int, int, int);
void operation_8c224ddc(Object *o, int a1)
{
    int i;
    int x;
    int y;
    Rect *icon;
    Rect *slot;
    char *b;
    char *p;
    int lim;
    int v;
    x = 0;
    y = 0;
    b = g_8c5059a0;
    slot = o->f30->f04;
    icon = o->f30->f00;
    icon->f34 = 9;
    icon->f2c = -1;
    slot->f2c = -1;
    slot->f10 = 32.0f;
    slot->f14 = 32.0f;
    b += 0x1c;
    normalize_rectangle_fields(slot, 161.0f, 214.0f);
    slot->f34 = 0;
    slot->f18 = 0.5f;
    p = b + 0xc;
    lim = 0xc - call_8c21f468();
    for (i = 0; i < lim; i++, p += 4) {
        slot->f08 = (float)x * 40.0f + 5.0f;
        slot->f0c = (float)y * 40.0f + 9.0f;
        icon->f08 = slot->f08 + 16.0f;
        icon->f0c = slot->f0c + 16.0f;
        operation_8c1a6810(icon, p[0], p[3] & 1, p[3] >> 1 & 1);
        draw_view_nodes(o, o->f2c, a1);
        if (++x >= 4) {
            y++;
            x = 0;
        }
    }
    slot->f34 = 9;
    for (i -= lim; i < 4; i++) {
        v = *(unsigned short *)(b + 4 + (i << 1)) & 0xffff;
        if ((unsigned short)(unsigned char)v == 0xff) {
            continue;
        }
        icon->f08 = (float)x * 40.0f + 5.0f;
        icon->f0c = (float)y * 40.0f + 9.0f;
        call_8c1a661c(icon, slot, (unsigned char)v, v >> 8 & 7, v >> 11 & 1, v >> 12 & 1, i);
        draw_view_nodes(o, o->f2c, a1);
        if (++x >= 4) {
            y++;
            x = 0;
        }
    }
}
