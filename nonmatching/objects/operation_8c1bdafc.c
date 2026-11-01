/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1bdafc
 * function: operation_8c1bdafc
 * language: c
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 4 of 127 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv11 S_vv11;
typedef struct S_vv8 S_vv8;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0xc];
    float f40;
    char unknown44[0x26];
    char f6a;
    char f6b;
    int f6c;
    int f70;
    int f74;
};
struct S_vv8 {
    char unknown0[0x20];
    int f20;
};
struct S_vv11 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x4];
    float f10;
};
struct Arg0_30_0 {
    int f00;
};
extern void play_se_8c05fbf8(int, int, int, int);
extern int call_8c18e8a0(int, int);
extern void call_8c0e1f40(S_vv8 *);
extern int call_8c18e768(int, int);
void operation_8c1bdafc(Object *o)
{
    char *v6;
    unsigned int v7;
    S_vv8 *v8;
    int v9;
    S_vv11 *v11;
    float v10;
    int t1;
    play_se_8c05fbf8(0x50000, 0, 0, 0);
    o->f74 += *(int *)((char *)0x8c288f70 + (o->f6b << 2));
    if (o->f74 > o->f70) {
        o->f74 = (int)(o->f6c);
    }
    v6 = (char *)o->f74;
    v7 = (unsigned int)0;
    while ((unsigned int)6 > v7) {
        v8 = (S_vv8 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v7 << 2));
        t1 = call_8c18e8a0((int)(v6), 0xa);
        v8->f20 = (int)(t1);
        call_8c0e1f40(v8);
        v6 = (char *)call_8c18e768((int)(v6), 0xa);
        v7 = (unsigned int)(v7 + 1);
    }
    v9 = (int)0;
    v10 = (float)((o->f40 - 18.0f) * 0.5f + (float)(o->f6a * 0xc) * 0.5f - 6.0f);
    while (o->f6a > v9) {
        v11 = (S_vv11 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v9 << 2));
        v11->f08 = v10 + v11->f10 * 0.5f;
        v9 = (int)(v9 + 1);
        v10 = (float)(v10 - 12.0f);
    }
    while (6 > v9) {
        (*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v9 << 2)))->f00 |= 2;
        v9 = (int)(v9 + 1);
    }
}
