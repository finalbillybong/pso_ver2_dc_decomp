/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c178258
 * function: operation_8c178258
 * language: c
 * reference size: 472 bytes
 * compiled size: 472 bytes (+0.0%)
 * differing lines: 10 of 189 reference instruction lines
 * differing bytes: 332
 * provenance: generator draft (mode bgotoext)
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
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct Object Object;
typedef struct Arg0_374 Arg0_374;
typedef struct Arg0_374_184 Arg0_374_184;
typedef struct Arg0_374_dc Arg0_374_dc;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x20];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x4];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x2d8];
    int f350;
    float f354;
    int f358;
    float f35c;
    float f360;
    float f364;
    float f368;
    int f36c;
    int f370;
    Arg0_374 *f374;
    short f378;
};
struct Arg0_374 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x42];
    int f64;
    char unknown68[0x74];
    Arg0_374_dc *fdc;
    char unknowne0[0xa4];
    Arg0_374_184 *f184;
    char unknown188[0x19c];
    Vector3 f324;
};
struct Arg2 {
    char unknown0[0xc];
    float f0c;
    char unknown10[0xc];
    Vector3 f1c;
};
struct Arg0_374_dc {
    char unknown0[0xc];
    float f0c;
    char unknown10[0xc];
    Vector3 f1c;
};
struct Arg0_374_184 {
    char unknown0[0x10];
    float f10;
};
extern S_g8c44be98 *g_8c44be98;
extern void call_8c043418(Object *, void *);
extern void transform_actor_records(void *);
extern int create_effect_769c(void *, int);
Object *operation_8c178258(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    int t1;
    (void)home;
    call_8c043418(o, g_8c44be98);
    o->dispatch = (void *)0x8c270de0;
    if (a1 == 0) {
    } else {
        o->f374 = (Arg0_374 *)a1;
        o->f378 = o->f374->f20;
        if (a2 != 0) {
            *(Vector3 *)&o->f3c = *(Vector3 *)&a2->f1c;
            o->f354 = a2->f0c * 0.15f;
        } else {
            if (o->f374->fdc != 0) {
                transform_actor_records((void *)(o->f374));
                *(Vector3 *)&o->f3c = *(Vector3 *)&o->f374->fdc->f1c;
                o->f354 = o->f374->fdc->f0c * 0.15f;
            } else {
                *(Vector3 *)&o->f3c = *(Vector3 *)&o->f374->f324;
                if (o->f374->f184 != 0) {
                    o->f354 = o->f374->f184->f10 * 0.075f;
                } else {
                    o->f354 = 1.5f;
                }
            }
        }
        o->f64 = (int)(o->f374->f64);
        o->f74 = 0.0f;
        o->f70 = 0.0f;
        o->f6c = 0.0f;
        o->f350 = 0;
        o->f358 = 0;
        o->f35c = 0.0f;
        o->f360 = 0.0f;
        o->f364 = 0.0f;
        o->f368 = 0.0f;
        t1 = create_effect_769c((void *)(&o->f3c), 0x12e);
        o->f36c = (int)(t1);
        o->f370 = 0;
        goto L_8c1783c6;
    }
    o->f36c = 0;
    o->f04 |= 1;
L_8c1783c6:;
    return o;
}
