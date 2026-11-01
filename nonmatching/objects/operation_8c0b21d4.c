/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b21d4
 * function: operation_8c0b21d4
 * language: c
 * reference size: 380 bytes
 * compiled size: 380 bytes (+0.0%)
 * differing lines: 4 of 174 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, constant loading; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c285418 S_L8c285418;
typedef struct Frame Frame;
typedef struct S_g8c285418 S_g8c285418;
typedef struct S_g8c285418_0 S_g8c285418_0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_20_0 Arg0_20_0;
typedef struct Arg1 Arg1;
typedef struct S_vv3 S_vv3;
typedef struct S_vv5 S_vv5;
typedef struct S_vv7 S_vv7;
typedef struct Block_p0_24 {
    float f00;
    float f04;
    float f08;
} Block_p0_24;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    Block_p0_24 f24;
    Vector3 f30;
    float f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
struct S_L8c285418 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    int f04;
    int f08;
    int f0c;
};
struct S_vv3 {
    char unknown0[0x48];
    int f48;
};
struct S_vv5 {
    char unknown0[0x44];
    float f44;
    float f48;
};
struct S_vv7 {
    char unknown0[0x44];
    float f44;
    float f48;
};
extern S_L8c285418 g_8c285418;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int operator_new_8c18de4c(int);
extern int create_effect_785c(void *, void *, int);
Object *operation_8c0b21d4(Object *o, Arg1 *a1, int a2, int a3, register int a4, int a5)
{
    Frame frame;
    Object **home = &o;
    Object *p;
    int v1;
    int v2;
    S_vv3 *v3;
    int v4;
    S_vv5 *v5;
    S_vv7 *v7;
    int t1;
    int t2;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a5);
    o->dispatch = (void *)0x8c265ec0;
    o->f24.f00 = a1->f00;
    o->f24.f04 = a1->f04;
    o->f24.f08 = a1->f08;
    o->f48 = a3;
    o->f4c = a4;
    *(Vector3 *)&o->f30 = *(Vector3 *)&o->f24;
    o->f40 = a2;
    o->f3c = 0.0f;
    o->f44 = 0;
    t1 = operator_new_8c18de4c((int)(*(int *)((char *)&g_8c285418.f04 + (o->f48 << 3)) << 2));
    v1 = 0;
    o->f20 = (Arg0_20 *)t1;
    v2 = (int)0x4000;
    while ((p = o, *(unsigned int *)((char *)&g_8c285418.f04 + (p->f48 << 3)) > v1)) {
        (&frame)->f04 = 0;
        (&frame)->f08 = 0;
        (&frame)->f0c = (int)(v2);
        t2 = create_effect_785c((void *)((int)p + 0x24), (void *)(&(&frame)->f04), (int)(*(S_g8c285418_0 **)((char *)((char *)*(S_g8c285418 **)((char *)&g_8c285418 + (p->f48 << 3)) + 0x0) + (v1 << 3))));
        v4 = (int)(v1 << 2);
        *(int *)((char *)((char *)o->f20 + 0x0) + (v4)) = (int)(t2);
        {
        Object *self = o;
        if (self->f48 == 2) {
            if (a4 >= 0xf && 0x19 > a4) {
                if (!(1 >= v1)) {
                    goto L_8c0b2308;
                }
                v5 = (S_vv5 *)*(Arg0_20_0 **)((char *)((char *)self->f20 + 0x0) + (v4));
                if (v5 == 0) {
                    goto L_8c0b2308;
                }
                v5->f44 = 1.3f;
                v5->f48 = 1.3f;
                goto L_8c0b2308;
            }
            if (a4 >= 0x19 && 0x1e > a4 && 1 >= v1) {
                v7 = (S_vv7 *)*(Arg0_20_0 **)((char *)((char *)self->f20 + 0x0) + (v4));
                if (v7 != 0) {
                    v7->f44 = 1.3f;
                    v7->f48 = 1.8f;
                }
            }
        }
        }
L_8c0b2308:;
        v1 = v1 + 1;
    }
    return o;
}
