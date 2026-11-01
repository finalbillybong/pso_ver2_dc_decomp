/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ea1b0
 * function: operation_8c0ea1b0
 * language: c
 * reference size: 412 bytes
 * compiled size: 412 bytes (+0.0%)
 * differing lines: 12 of 161 reference instruction lines
 * differing bytes: 14
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_0 S_g8c467180_2c_0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct S_vv1 S_vv1;
struct Frame {
    Block8 f00;
    Block8 f08;
    Vector3 f10;
    Vector3 f1c;
};
struct Object {
    char unknown0[0x20];
    char f20;
    char unknown21[0x1];
    short f22;
    Arg0_24 *f24;
    Arg0_28 *f28;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1b];
    unsigned char f21;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x80];
    int f80;
};
extern Vector3 g_8c308888;
extern Vector3 g_8c308894;
extern Block8 g_8c3088a0;
extern Block8 g_8c3088a8;
extern S_g8c467180 *g_8c467180;
extern int g_8c4dbaec;
extern int g_8c4dbaf4;
extern void operation_8c0a2144(int);
extern void operation_8c0a237c(void *, void *);
extern void operation_8c180e84(void);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
extern void request_resource_release(void *);
extern void select_mode0_8c1cc49c(void);
void operation_8c0ea1b0(Object *o)
{
    Frame frame;
    int t1;
    S_vv1 *v1;
    int pm2;
    *(Vector3 *)&(&frame)->f1c = *(Vector3 *)&g_8c308888;
    *(Vector3 *)&(&frame)->f10 = *(&g_8c308894);
    operation_8c0a2144(6);
    operation_8c0a237c((void *)(&(&frame)->f1c), (void *)(&(&frame)->f10));
    switch (o->f20) {
        case 0:
        o->f20 = 1;
        case 1:
        v1 = (S_vv1 *)o->f24;
        if (v1 == 0) {
            return;
        }
        if (((v1->f21 & 1)) == 0) {
            return;
        }
        v1->f04 |= 1;
        o->f24 = (Arg0_24 *)0;
        operation_8c180e84();
        o->f22 = 0;
        o->f20 = 2;
        return;
        case 2:
        if (0 == g_8c4dbaec) {
            o->f20 = 4;
            return;
        }
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c3088a0;
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c3088a8;
        t1 = create_fitted_pair_grid_view((void *)(&(&frame)->f08), (void *)(&frame));
        o->f28 = (Arg0_28 *)t1;
        t1 = (int)(g_8c467180->f2c->f80);
        operation_8c119764((int)(o->f28), t1, 1);
        t1 = (int)(o->f28);
        operation_8c119764(t1, *(int *)(((g_8c4dbaf4 + 0x23) << 2) + (int)g_8c467180->f2c), 8);
        o->f20 = 3;
        return;
        case 3:
        if (g_8c4dbaec != 0) {
            return;
        }
        request_resource_release((void *)(o->f28));
        o->f28 = (Arg0_28 *)0;
        o->f20 = 4;
        return;
        case 4:
        o->f22 += 1;
        if ((float)o->f22 > 7.5f) {
            o->f20 = (char)5;
            select_mode0_8c1cc49c();
        }
        return;
        case 5:
        break;
    }
}
