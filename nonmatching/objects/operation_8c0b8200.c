/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b8200
 * function: operation_8c0b8200
 * language: c
 * reference size: 448 bytes
 * compiled size: 448 bytes (+0.0%)
 * differing lines: 34 of 197 reference instruction lines
 * differing bytes: 27
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order; review found and
 *   fixed behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2856f8 S_L8c2856f8;
typedef struct S_L8c46f380 S_L8c46f380;
typedef struct S_c8c0a777c S_c8c0a777c;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_s2c Arg0_s2c;
typedef struct Arg1 Arg1;
typedef struct S_vv4_0 S_vv4_0;
typedef struct S_vv4_0_0 S_vv4_0_0;
typedef struct Block_p0_2c {
    int f00;
    char unknown4[0x8];
} Block_p0_2c;
typedef struct Block_frame_4 {
    int f00;
    float f04;
    int f08;
} Block_frame_4;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x8];
    int f24;
    int f28;
    Vector3 f2c;
    float f38;
    float f3c;
    float f40;
    float f44;
    int f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    int f5c;
    int f60;
};
struct Arg1 {
    Vector3 f00;
};
struct Arg0_s2c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_L8c46f380 {
    Vector3 f00;
    Vector3 f0c;
};
struct Frame {
    Vector3 f04;
};
struct S_c8c0a777c {
    char unknown0[0x44];
    float f44;
    float f48;
};
struct S_L8c2856f8 {
    char unknown0[0x4];
    int f04;
};
extern S_L8c2856f8 g_8c2856f8;
extern S_L8c46f380 g_8c46f380;
extern char g_8c3053a8[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern S_c8c0a777c *create_effect_777c(void *, int);
Object *operation_8c0b8200(Object *o, Arg1 *a1, int a2, int a3, int a4, float f0)
{
    Vector3 v;
    Vector3 *p;
    float k;
    Object **home = &o;
    int v3;
    int v4;
    int v6;
    S_c8c0a777c *t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a4);
    o->dispatch = (void *)0x8c26615c;
    o->f24 = a2;
    o->f28 = a3;
    o->f60 = 1;
    o->f2c = a1->f00;
    o->f44 = f0;
    o->f48 = 0;
    o->f5c = 0;
    o->f38 = 1.2f;
    o->f3c = 1.2f;
    o->f40 = 1.2f;
    o->f4c = 1.0f;
    o->f50 = 1.0f;
    o->f54 = 1.0f;
    o->f58 = 1.0f;
    g_8c46f380.f00 = *(Vector3 *)(g_8c3053a8 + 0xc);
    g_8c46f380.f0c = *(Vector3 *)(g_8c3053a8 + 0x18c);
    p = &o->f2c;
    v = *p;
    k = 5.0f;
    v.y += k;
    *p = v;
    create_effect_777c((void *)&o->f2c, 0x1de);
    v.y = o->f2c.y + 8.0f;
    v3 = 0;
    while ((v4 = o->f24 << 3, *(unsigned int *)((char *)&g_8c2856f8.f04 + v4) > v3)) {
        t1 = create_effect_777c((void *)&v, *(int *)(*(char **)((char *)&g_8c2856f8 + v4) + (v3 << 3)));
        if (o->f24 == 2) {
            v6 = o->f28;
            if (v6 >= 0xf && 0x19 > v6) {
                if (1 >= v3 && t1 != 0) {
                    t1->f44 = 1.3f;
                    t1->f48 = 1.3f;
                }
            } else if (v6 >= 0xf && 0x19 > v6 && 1 >= v3 && t1 != 0) {
                t1->f44 = 1.8f;
                t1->f48 = 1.8f;
            }
        }
        v3 = v3 + 1;
    }
    return o;
}
