/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b7f70
 * function: operation_8c1b7f70
 * language: c
 * reference size: 364 bytes
 * compiled size: 364 bytes (+0.0%)
 * differing lines: 28 of 144 reference instruction lines
 * differing bytes: 44
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
typedef struct S_L8c327a88 S_L8c327a88;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_0 Arg0_0_0;
typedef struct Arg0_0_0_8 Arg0_0_0_8;
typedef struct Arg0_0_0_c Arg0_0_0_c;
typedef struct Arg0_0_430 Arg0_0_430;
typedef struct Arg0_0_430_4 Arg0_0_430_4;
typedef struct Arg1 Arg1;
typedef struct S_x44288_0 S_x44288_0;
typedef struct S_x55056_0 S_x55056_0;
struct Object {
    char unknown0[0x3e4];
    float f3e4;
    char unknown3e8[0x4];
    int f3ec;
    float f3f0;
};
struct Arg0_0 {
    char unknown0[0x430];
    Arg0_0_430 *f430;
};
struct S_L8c327a88 {
    char unknown0[0x8];
    int f08;
};
extern int g_8c575570;
extern S_L8c327a88 g_8c327a88;
void operation_8c1b7f70(Object *o, Arg1 *a1, float f0)
{
    float v1;
    int v12;
    int v8;
    int v11;
    int v9;
    int v10;
    if (o->f3ec < 0 || o->f3ec >= 0xa) {
        return;
    }
    v1 = (float)o->f3f0;
    if (0.0f > v1 || !(30.0f > v1)) {
        return;
    }
    if (f0 != 0.0f) {
        if (1.0f > f0) {
            ((void (*)(void))0x8c21c508)();
        }
        g_8c575570 |= 0x20000;
        ((void (*)(void *, float, float))0x8c397c90)((void *)&g_8c575570, 0.0f, o->f3e4);
        v8 = (int)0x398;
        v9 = (int)0x42c;
        v11 = (int)0;
        v10 = (int)0x434;
        while (3 > v11) {
            v12 = (int)(v11 << 2);
            ((void (*)(void *))0x8c3827d8)(*(Arg0_0_0_c **)((char *)((char *)*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v8)) + 0x0) + (v9)) + 0xc) + (*(int *)((char *)((char *)a1 + 0x0) + (v12)) << 4)));
            ((void (*)(void *))0x8c161c78)(*(S_x55056_0 **)((char *)((char *)((int)o + v10) + 0x0) + (v12)));
            ((void (*)(void *, void *, float))0x8c0c3964)(*(Arg0_0_0_8 **)((char *)((char *)*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v8)) + 0x0) + (v9)) + 0x8) + (*(int *)((char *)((char *)a1 + 0x0) + (v12)) << 4)), *(Arg0_0_430_4 **)((char *)((char *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v8)))->f430 + 0x4) + (*(int *)((char *)((char *)(o->f3ec * 0x14 + (char *)&g_8c327a88.f08) + 0x0) + (v12)) << 3)), o->f3f0);
            ((void (*)(void *))0x8c161ce4)(*(S_x44288_0 **)((char *)((char *)((int)o + v10) + 0x0) + (v12)));
            v11 = (int)(v11 + 1);
        }
        g_8c575570 &= -0x20001;
        if (1.0f > f0) {
            ((void (*)(void))0x8c21c5a0)();
        }
    }
}
