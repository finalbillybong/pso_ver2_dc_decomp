/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c167614
 * function: TPhotonConcentrate_ctor_8c167614
 * language: c
 * reference size: 352 bytes
 * compiled size: 356 bytes (+1.1%)
 * differing lines: 156 of 138 reference instruction lines
 * differing bytes: 285
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
typedef struct Object Object;
typedef struct Arg0_s108 Arg0_s108;
typedef struct Arg0_sfc Arg0_sfc;
typedef struct Arg1 Arg1;
typedef struct Arg1_s18 Arg1_s18;
typedef struct Arg1_sc Arg1_sc;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0xc4];
    Vector3 fe4;
    Vector3 ff0;
    float ffc;
    float f100;
    float f104;
    int f108;
    char unknown10c[0x10];
    float f11c;
    float f120;
    int f124;
    int f128;
    char unknown12c[0x4];
    int f130;
    int f134;
};
struct Arg1 {
    Vector3 f00;
    int f0c;
    char unknown10[0x8];
    int f18;
    char unknown1c[0x8];
    float f24;
    float f28;
    float f2c;
    int f30;
    int f34;
};
struct Arg1_sc {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s108 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg1_s18 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_sfc {
    char unknown0[0x4];
    int f04;
    int f08;
};
extern int g_8c317570;
extern void operation_8c051eb8(void *, int);
extern int lookup_object_by_id(unsigned short);
extern int create_effect_769c(void *, int);
Object *TPhotonConcentrate_ctor_8c167614(Object *o, Arg1 *a1, int a2, int a3)
{
    Object **home = &o;
    char *v3;
    int v4;
    char *v2;
    char *v1;
    int t1;
    int t2;
    (void)home;
    operation_8c051eb8((void *)o, a2);
    o->dispatch = (void *)0x8c26ff58;
    o->tag = (int)(g_8c317570);
    o->size = 0x144;
    *(Vector3 *)&o->ff0 = *(Vector3 *)&a1->f00;
    *(Vector3 *)&o->fe4 = *(Vector3 *)&a1->f00;
    v3 = (char *)a1->f0c;
    v4 = (int)((Arg1_sc *)((char *)a1 + 0xc))->f04;
    o->f108 = (int)(v3);
    ((Arg0_s108 *)((char *)o + 0x108))->f04 = (int)(v4);
    ((Arg0_s108 *)((char *)o + 0x108))->f08 = (int)(((Arg1_sc *)((char *)a1 + 0xc))->f08);
    v2 = (char *)a1->f18;
    v1 = (char *)((Arg1_s18 *)((char *)a1 + 0x18))->f04;
    *(int *)&o->ffc = (int)(v2);
    ((Arg0_sfc *)((char *)o + 0xfc))->f04 = (int)(v1);
    ((Arg0_sfc *)((char *)o + 0xfc))->f08 = (int)(((Arg1_s18 *)((char *)a1 + 0x18))->f08);
    o->ffc *= a1->f28;
    o->f100 *= a1->f28;
    o->f104 *= a1->f28;
    o->f11c = a1->f24;
    o->f120 = a1->f2c;
    o->f128 = (int)(a1->f30);
    o->f124 = (int)(a1->f34);
    t1 = lookup_object_by_id((unsigned short)a3);
    o->f134 = (int)(t1);
    t2 = create_effect_769c((void *)(&o->ff0), 0x135);
    o->f130 = (int)(t2);
    return o;
}
