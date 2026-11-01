/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13c0b4
 * function: operation_8c13c0b4
 * language: c
 * reference size: 408 bytes
 * compiled size: 404 bytes (-1.0%)
 * differing lines: 56 of 132 reference instruction lines
 * differing bytes: 345
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9c20 S_g8c4d9c20;
typedef struct S_g8c4d9c24 S_g8c4d9c24;
typedef struct S_g8c4d9c28 S_g8c4d9c28;
typedef struct S_g8c4d9c30 S_g8c4d9c30;
typedef struct S_g8c4d9c30_42c S_g8c4d9c30_42c;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_dc Arg0_dc;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x8];
    int f34;
    int f38;
    Vector3 f3c;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x6c];
    Arg0_184 *f184;
    char unknown188[0x10];
    short f198;
    short f19a;
    char unknown19c[0x120];
    int f2bc;
    char unknown2c0[0x64];
    Block_p0_324 f324;
    short f330;
    short f332;
    char unknown334[0x26];
    short f35a;
    char unknown35c[0x10];
    void *f36c;
    char unknown370[0x14];
    int f384;
    char unknown388[0x4];
    int f38c;
    char unknown390[0x38];
    int f3c8;
    int f3cc;
};
struct S_g8c4d9c30 {
    char unknown0[0x42c];
    S_g8c4d9c30_42c *f42c;
    int f430;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct S_g8c4d9c30_42c {
    char unknown0[0x118];
    int f118;
    int f11c;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern S_g8c4d9c20 *g_8c4d9c20;
extern S_g8c4d9c24 *g_8c4d9c24;
extern S_g8c4d9c28 *g_8c4d9c28;
extern S_g8c4d9c30 *g_8c4d9c30;
extern void copy_actor_records(void *, void *, int);
extern void call_8c0439bc(Object *, void *, void *, void *, float, float);
extern void call_8c01c838(Object *, short);
extern void attach_and_insert_object(void *);
extern void set_fields_8c13d384(void *);
void operation_8c13c0b4(Object *o)
{
    o->f114 = (int)(g_8c4d9c30->f430);
    o->f110 = (void *)0x8c3136e0;
    copy_actor_records((void *)o, (void *)((void *)0x8c31375c), 1);
    o->f384 = 0;
    o->f36c = (void *)0x8c313740;
    call_8c0439bc(o, g_8c4d9c20, g_8c4d9c24, g_8c4d9c28, 1.0f, 1.0f);
    o->ff0 = 0;
    call_8c01c838(o, o->ff0);
    o->f330 = o->f198;
    o->f332 = o->f19a;
    o->f35a = o->f330;
    o->f38c = 0x2e;
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    if (o->f184 != 0) {
        o->f324.f04 += o->f184->f10 * 0.5f;
    }
    attach_and_insert_object((void *)o);
    o->f38 = (int)(g_8c4d9c30->f42c->f118);
    o->f28 = (int)(g_8c4d9c30->f42c->f11c);
    set_fields_8c13d384((void *)o);
    o->fdc->f18 = (unsigned int)o->fdc->f18 >> 1 << 1;
    o->f3c8 = 0;
    o->f3cc = 0;
    o->f2bc |= 4;
    o->f34 |= 0x8000;
}
