/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d889c
 * function: operation_8c0d889c
 * language: c
 * reference size: 324 bytes
 * compiled size: 328 bytes (+1.2%)
 * differing lines: 40 of 122 reference instruction lines
 * differing bytes: 208
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_c8c053d84_s60 S_c8c053d84_s60;
typedef struct Object Object;
typedef struct Arg0_130 Arg0_130;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg0_s3c Arg0_s3c;
typedef struct Arg0_s60 Arg0_s60;
typedef struct S_vv31 S_vv31;
typedef struct S_vv31_s1c S_vv31_s1c;
typedef struct Block_p0_3c {
    int f00;
    char unknown4[0x8];
} Block_p0_3c;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    Vector3 f48;
    char unknown54[0xc];
    int f60;
    char unknown64[0x78];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x34];
    Arg0_130 *f130;
    char unknown134[0x64];
    short f198;
    char unknown19a[0x196];
    short f330;
    char unknown332[0xae];
    int f3e0;
    char unknown3e4[0xc];
    int f3f0;
    char unknown3f4[0x54];
    unsigned short f448;
    char unknown44a[0x2];
    float f44c;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x18];
    int f60;
    char unknown64[0x344];
    unsigned short f3a8;
};
struct Arg0_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_vv31 {
    char unknown0[0x1c];
    int f1c;
};
struct S_vv31_s1c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_c8c053d84_s60 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s60 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_130 {
    char unknown0[0x4];
    int f04;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void call_8c05be98(Object *, int);
extern void operation_8c01c5f0(Object *);
extern void operation_8c059ea4(void *, int);
extern void operation_8c0d8a10(void *);
void operation_8c0d889c(Object *o, int a1)
{
    S_vv31 *v31;
    char *v3;
    int v32;
    char *v2;
    int v33;
    S_c8c053d84 *t1;
    t1 = lookup_object_by_id((unsigned short)(o->f448));
    if (t1 != 0) {
        *(Vector3 *)&o->f3c = *(Vector3 *)&t1->f3c;
        *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
        v31 = (S_vv31 *)o->fdc;
        v3 = (char *)o->f3c.f00;
        v32 = (int)((Arg0_s3c *)((char *)o + 0x3c))->f04;
        v31->f1c = (int)(v3);
        ((S_vv31_s1c *)((char *)v31 + 0x1c))->f04 = (int)(v32);
        ((S_vv31_s1c *)((char *)v31 + 0x1c))->f08 = (int)(((Arg0_s3c *)((char *)o + 0x3c))->f08);
        v2 = (char *)t1->f60;
        v33 = (int)((S_c8c053d84_s60 *)((char *)t1 + 0x60))->f04;
        o->f60 = (int)(v2);
        ((Arg0_s60 *)((char *)o + 0x60))->f04 = (int)(v33);
        ((Arg0_s60 *)((char *)o + 0x60))->f08 = (int)(((S_c8c053d84_s60 *)((char *)t1 + 0x60))->f08);
        o->f34 &= -0x801;
        o->f34 = 0x20000000;
        o->f330 = o->f198;
        o->f3f0 = a1;
        call_8c05be98(o, (int)(t1->f3a8));
        o->f44c = 0.0f;
        o->f3e0 &= -0x201;
        o->ff0 = 0xa;
        operation_8c01c5f0(o);
        o->ff8 = (float)(unsigned int)(o->f130->f04 + -1);
        operation_8c059ea4((void *)o, 8);
        operation_8c0d8a10((void *)o);
    }
}
