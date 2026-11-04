/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c157ac4
 * function: TObjMapWarpAncient_ctor_8c157ac4
 * language: c
 * reference size: 256 bytes
 * compiled size: 260 bytes (+1.6%)
 * differing lines: 92 of 92 reference instruction lines
 * differing bytes: 170
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TObjMapWarpAncient.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4daa80 S_g8c4daa80;
typedef struct S_g8c4daa80_42c S_g8c4daa80_42c;
typedef struct S_g8c4daa80_430 S_g8c4daa80_430;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x100];
    float f120;
    int f124;
    int f128;
    int f12c;
    int f130;
    int f134;
    int f138;
    int f13c;
};
struct S_g8c4daa80 {
    char unknown0[0x42c];
    S_g8c4daa80_42c *f42c;
    S_g8c4daa80_430 *f430;
};
struct S_g8c4daa80_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
    char unknown10[0x18];
    int f28;
    int f2c;
    char unknown30[0x18];
    int f48;
    int f4c;
};
struct S_g8c4daa80_430 {
    char unknown0[0xc];
    int f0c;
};
extern int g_8c316248;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4daa80 *g_8c4daa80;
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void call_8c0887c0(S_c8c122700 *, void *, int);
S_c8c122700 *TObjMapWarpAncient_ctor_8c157ac4(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x140);
    if (t1 != 0) {
        call_8c0887c0(t1, g_8c44be98, a0);
        t1->f18 = (void *)0x8c26ebdc;
        t1->f00 = (int)(g_8c316248);
        t1->f1e = 0x140;
        t1->f120 = 0.0f;
        t1->f124 = (int)(g_8c4daa80->f42c->f28);
        t1->f128 = (int)(g_8c4daa80->f42c->f08);
        t1->f12c = (int)(g_8c4daa80->f42c->f48);
        t1->f130 = (int)(g_8c4daa80->f42c->f2c);
        t1->f134 = (int)(g_8c4daa80->f42c->f0c);
        t1->f138 = (int)(g_8c4daa80->f42c->f4c);
        t1->f13c = (int)(g_8c4daa80->f430->f0c);
    }
    return t1;
}
