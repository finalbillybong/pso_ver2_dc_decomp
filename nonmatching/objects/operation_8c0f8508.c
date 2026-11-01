/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f8508
 * function: operation_8c0f8508
 * language: c
 * reference size: 600 bytes
 * compiled size: 608 bytes (+1.3%)
 * differing lines: 130 of 224 reference instruction lines
 * differing bytes: 536
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_39c Arg0_39c;
typedef struct Arg0_39c_42c Arg0_39c_42c;
typedef struct Arg0_s3c Arg0_s3c;
typedef struct Arg0_s48 Arg0_s48;
typedef struct Arg0_s54 Arg0_s54;
typedef struct Block_p0_3c {
    int f00;
    char unknown4[0x8];
} Block_p0_3c;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xc];
    int f38;
    Block_p0_3c f3c;
    int f48;
    char unknown4c[0x8];
    int f54;
    char unknown58[0x20];
    Vector3 f78;
    char unknown84[0x6c];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x200];
    float f318;
    float f31c;
    float f320;
    Vector3 f324;
    short f330;
    char unknown332[0x2];
    int f334;
    char unknown338[0x22];
    short f35a;
    char unknown35c[0x10];
    int f36c;
    char unknown370[0x18];
    int f388;
    int f38c;
    char unknown390[0xc];
    Arg0_39c *f39c;
    char unknown3a0[0x4];
    int f3a4;
    int f3a8;
    char unknown3ac[0x3c];
    int f3e8;
    char unknown3ec[0x18];
    int f404;
    char unknown408[0x8];
    int f410;
};
struct Arg0_39c {
    char unknown0[0x42c];
    Arg0_39c_42c *f42c;
    int f430;
};
struct Arg0_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s54 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s48 {
    char unknown0[0x4];
    int f04;
    int f08;
};
extern int g_8c470640;
extern float object_random_fraction(void *);
extern int copy_actor_records(void *, void *, int);
extern void call_8c01c838(Object *, int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern void call_8c0121a0(Object *, int, int, int);
extern void attach_and_insert_object(void *);
extern int game_malloc_8c011ecc(int);
extern void operation_8c0ffdc0(void *, int);
extern void set_fields_8c0fac80(void *);
void operation_8c0f8508(Object *o)
{
    int v4;
    char *v5;
    int v15;
    char *v6;
    int v16;
    float t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    o->f39c = (Arg0_39c *)g_8c470640;
    t1 = object_random_fraction((void *)o);
    if (0.001f > t1 || ((o->f388 & 1)) != 0) {
        o->f410 = 1;
        goto L_8c0f8540;
    }
    o->f410 = 0;
L_8c0f8540:;
    v4 = (int)(*(int *)((char *)0x8c30a5ec + (o->f410 << 2)) << 4);
    o->f28 = (int)(*(int *)((char *)((char *)o->f39c->f42c + 0xc) + (v4)));
    o->f38 = (int)(*(int *)((char *)((char *)o->f39c->f42c + 0x8) + (v4)));
    *(Vector3 *)&o->f78 = *(Vector3 *)&o->f3c;
    v5 = (char *)o->f3c.f00;
    v15 = (int)((Arg0_s3c *)((char *)o + 0x3c))->f04;
    o->f54 = (int)(v5);
    ((Arg0_s54 *)((char *)o + 0x54))->f04 = (int)(v15);
    ((Arg0_s54 *)((char *)o + 0x54))->f08 = (int)(((Arg0_s3c *)((char *)o + 0x3c))->f08);
    *(Vector3 *)&o->f78 = *(Vector3 *)&o->f3c;
    v6 = (char *)o->f3c.f00;
    v16 = (int)((Arg0_s3c *)((char *)o + 0x3c))->f04;
    o->f48 = (int)(v6);
    ((Arg0_s48 *)((char *)o + 0x48))->f04 = (int)(v16);
    ((Arg0_s48 *)((char *)o + 0x48))->f08 = (int)(((Arg0_s3c *)((char *)o + 0x3c))->f08);
    t2 = copy_actor_records((void *)o, (void *)((void *)0x8c30a280), 1);
    o->f3a8 = (int)(t2);
    o->f110 = (void *)0x8c30a2ac;
    o->f114 = (int)(o->f39c->f430);
    call_8c01c838(o, 0);
    o->ff0 = 0;
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
    o->f334 = 0;
    if (o->f410 == 0) {
        t3 = record24_8c17948c(0x30);
        t4 = record30_8c1794a0(0x30);
        t5 = block32_8c1794b4(0x30);
        call_8c0121a0(o, t3, t4, t5);
    } else {
        t6 = record24_8c17948c(0x34);
        t7 = record30_8c1794a0(0x34);
        t8 = block32_8c1794b4(0x34);
        call_8c0121a0(o, t6, t7, t8);
    }
    o->f35a = o->f330;
    attach_and_insert_object((void *)o);
    o->f36c = 0;
    if (o->f410 == 0) {
        o->f38c = 0x13;
    } else {
        o->f38c = 0x14;
    }
    t9 = game_malloc_8c011ecc(0x34);
    if (t9 != 0) {
        operation_8c0ffdc0((void *)t9, (int)o);
    }
    o->f3a4 = (int)(t9);
    o->f404 = 0;
    o->f3e8 = 0xffff;
    set_fields_8c0fac80((void *)o);
}
