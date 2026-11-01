/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c157bc4
 * function: operation_8c157bc4
 * language: c
 * reference size: 308 bytes
 * compiled size: 312 bytes (+1.3%)
 * differing lines: 58 of 113 reference instruction lines
 * differing bytes: 231
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daa80 S_g8c4daa80;
typedef struct S_g8c4daa80_42c S_g8c4daa80_42c;
typedef struct S_g8c4daa80_430 S_g8c4daa80_430;
typedef struct Object Object;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x70];
    int f90;
    char unknown94[0x60];
    float ff4;
    float ff8;
    int ffc;
    int f100;
    int f104;
    int f108;
    int f10c;
    int f110;
    int f114;
    int f118;
};
struct S_g8c4daa80 {
    char unknown0[0x42c];
    S_g8c4daa80_42c *f42c;
    S_g8c4daa80_430 *f430;
};
struct S_g8c4daa80_42c {
    char unknown0[0x18];
    int f18;
    int f1c;
    char unknown20[0x18];
    int f38;
    int f3c;
    char unknown40[0x18];
    int f58;
    int f5c;
};
struct S_g8c4daa80_430 {
    char unknown0[0x4];
    int f04;
    char unknown8[0xc];
    int f14;
};
extern int g_8c31624c;
extern S_g8c4daa80 *g_8c4daa80;
extern int g_8c4daa84;
extern int g_8c510ba0;
extern void call_8c088f14(Object *, int, int);
Object *operation_8c157bc4(Object *o, int a1, int a2)
{
    int v4;
    call_8c088f14(o, a1, a2);
    o->dispatch = (void *)0x8c26eb84;
    o->tag = (int)(g_8c31624c);
    o->size = 0x11c;
    o->ff8 = 0.0f;
    o->ff4 = 0.0f;
    o->ffc = (int)(g_8c4daa80->f42c->f18);
    o->f100 = (int)(g_8c4daa80->f42c->f38);
    o->f104 = (int)(g_8c4daa80->f42c->f58);
    if (!(o->f90 >= 0)) {
        o->f108 = (int)(g_8c4daa84);
    } else {
        o->f108 = (int)(g_8c4daa80->f42c->f1c);
    }
    o->f10c = (int)(g_8c4daa80->f42c->f3c);
    o->f110 = (int)(g_8c4daa80->f42c->f5c);
    o->f114 = (int)(g_8c4daa80->f430->f04);
    o->f118 = (int)(g_8c4daa80->f430->f14);
    v4 = (int)(g_8c510ba0 != 0);
    if (v4 != 0 && o->f90 >= 0) {
        o->f04 |= 1;
    }
    return o;
}
