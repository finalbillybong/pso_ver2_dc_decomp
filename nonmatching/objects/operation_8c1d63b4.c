/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d63b4
 * function: operation_8c1d63b4
 * language: c
 * reference size: 312 bytes
 * compiled size: 312 bytes (+0.0%)
 * differing lines: 58 of 134 reference instruction lines
 * differing bytes: 42
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation; review found and fixed behaviour defects of the generator draft; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_18 Arg0_30_18;
typedef struct Arg0_30_1c Arg0_30_1c;
typedef struct Arg0_30_20 Arg0_30_20;
typedef struct Arg0_30_24 Arg0_30_24;
typedef struct Arg0_30_28 Arg0_30_28;
typedef struct Arg0_30_2c Arg0_30_2c;
typedef struct Arg0_70 Arg0_70;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
typedef struct S_vv7 S_vv7;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x3c];
    Arg0_70 *f70;
    char unknown74[0x38];
    Vector3 fac;
};
struct Arg0_30 {
    char unknown0[0x18];
    Arg0_30_18 *f18;
    Arg0_30_1c *f1c;
    Arg0_30_20 *f20;
    Arg0_30_24 *f24;
    Arg0_30_28 *f28;
    Arg0_30_2c *f2c;
};
struct Frame {
    S_c8c1c7658 *f00;
    S_c8c021ef8 *f04;
    int f08;
};
struct S_vv3 {
    int f00;
};
struct S_vv4 {
    int f00;
    char unknown4[0x1c];
    int f20;
};
struct S_vv5 {
    int f00;
};
struct S_vv6 {
    int f00;
};
struct S_vv7 {
    int f00;
};
struct S_c8c1c7658 {
    char unknown0[0xc];
    unsigned char f0c;
};
struct S_vv2 {
    int f00;
};
extern int lookup_low_id(int);
extern void call_8c1d6550(Object *);
extern S_c8c1c7658 *operation_8c1c7658(void *);
extern int call_8c163428(void *, void *, void *);
extern void normalize_rectangle_fields(void *, float, float);
extern void initialize_fields_8c0e24e8(void *);
void operation_8c1d63b4(Object *o)
{
    Frame frame;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    S_vv6 *v6;
    S_vv7 *v7;
    S_vv2 *v2;
    (&frame)->f04 = (S_c8c021ef8 *)lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if ((&frame)->f04 != 0) {
        call_8c1d6550(o);
        *(Vector3 *)&o->fac = *(Vector3 *)&*(Vector3 *)0x8c32a18c;
        v2 = (S_vv2 *)o->f30->f18;
        v3 = (S_vv3 *)o->f30->f1c;
        v4 = (S_vv4 *)o->f30->f20;
        v5 = (S_vv5 *)o->f30->f24;
        v6 = (S_vv6 *)o->f30->f28;
        v7 = (S_vv7 *)o->f30->f2c;
        (&frame)->f00 = operation_8c1c7658((void *)(o->f70));
        if (call_8c163428((void *)(&frame)->f04, (void *)(o->f70), (void *)(&(&frame)->f08)) == 0 && (((&frame)->f08 & 1)) != 0) {
            normalize_rectangle_fields((void *)v2, 0.0f, 132.0f);
            v3->f00 |= 2;
            v4->f00 |= 2;
            v5->f00 |= 2;
            v6->f00 |= 2;
            v7->f00 |= 2;
            return;
        }
        if ((&frame)->f00->f0c != 0) {
            normalize_rectangle_fields((void *)v2, 0.0f, 232.0f);
            initialize_fields_8c0e24e8((void *)v3);
            initialize_fields_8c0e24e8((void *)v5);
            initialize_fields_8c0e24e8((void *)v7);
            v4->f20 = (&frame)->f00->f0c + 1;
            return;
        }
        v2->f00 |= 2;
        v3->f00 |= 2;
        v4->f00 |= 2;
        v5->f00 |= 2;
        v6->f00 |= 2;
        v7->f00 |= 2;
    }
}
