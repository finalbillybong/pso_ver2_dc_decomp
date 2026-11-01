/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c127738
 * function: operation_8c127738
 * language: c
 * reference size: 480 bytes
 * compiled size: 480 bytes (+0.0%)
 * differing lines: 84 of 156 reference instruction lines
 * differing bytes: 242
 * provenance: generator draft (experimental generator, mode bgotoext)
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
typedef struct S_g8c4d83a0 S_g8c4d83a0;
typedef struct S_g8c4d83a0_42c S_g8c4d83a0_42c;
typedef struct S_g8c4d9940 S_g8c4d9940;
typedef struct S_g8c4d9944 S_g8c4d9944;
typedef struct S_g8c4d9948 S_g8c4d9948;
typedef struct Object Object;
typedef struct Arg0_s3c Arg0_s3c;
typedef struct Block_p0_3c {
    int f00;
    char unknown4[0x8];
} Block_p0_3c;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    int tag;
    char unknown4[0x1a];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0x8];
    int f34;
    int f38;
    Block_p0_3c f3c;
    char unknown48[0xa8];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x40];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x28];
    short f198;
    short f19a;
    char unknown19c[0x188];
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
    char unknown390[0x14];
    int f3a4;
    char unknown3a8[0x20];
    float f3c8;
    float f3cc;
    float f3d0;
    int f3d4;
    float f3d8;
};
struct S_g8c4d83a0 {
    char unknown0[0x42c];
    S_g8c4d83a0_42c *f42c;
    int f430;
};
struct Arg0_s3c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c4d83a0_42c {
    char unknown0[0x28];
    int f28;
    int f2c;
};
extern int g_8c312370;
extern S_g8c4d83a0 *g_8c4d83a0;
extern S_g8c4d9940 *g_8c4d9940;
extern S_g8c4d9944 *g_8c4d9944;
extern S_g8c4d9948 *g_8c4d9948;
extern void copy_actor_records(void *, void *, int, int);
extern void call_8c0121a0(Object *, void *, void *, void *);
extern void operation_8c128b7c(Object *);
extern void call_8c01c838(Object *, short);
extern void attach_and_insert_object(void *, int, int);
void operation_8c127738(Object *o)
{
    char *v1;
    int v3;
    int v2;
    o->tag = (int)(g_8c312370);
    o->size = 0x444;
    v1 = (char *)g_8c4d83a0->f430;
    o->f114 = (int)(v1);
    o->f110 = (void *)0x8c3122b8;
    copy_actor_records((void *)o, (void *)((void *)0x8c312344), 1, (int)(v1));
    o->f384 = 0;
    o->f36c = (void *)0x8c312328;
    call_8c0121a0(o, g_8c4d9940, g_8c4d9944, g_8c4d9948);
    operation_8c128b7c(o);
    o->ff0 = 0;
    call_8c01c838(o, o->ff0);
    o->f330 = o->f198;
    o->f332 = o->f19a;
    o->f35a = o->f330;
    o->f38c = 0x26;
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    v2 = (int)o->f3c.f00;
    v3 = (int)((Arg0_s3c *)((char *)o + 0x3c))->f08;
    o->f324.f04 += 5.0f;
    attach_and_insert_object((void *)o, v3, v2);
    o->f38 = (int)(g_8c4d83a0->f42c->f28);
    o->f28 = (int)(g_8c4d83a0->f42c->f2c);
    o->f3d4 = 0;
    o->f3d8 = 0.0f;
    o->f3c8 = 15.0f;
    o->f3cc = 40.0f;
    o->f3d0 = o->f3c8;
    o->f3a4 &= -0x10001;
    *(Vector3 *)&o->f164 = *(Vector3 *)&o->f3c;
    *(Vector3 *)&o->f158 = *(Vector3 *)&o->f3c;
    o->f34 |= 0x1000000;
}
