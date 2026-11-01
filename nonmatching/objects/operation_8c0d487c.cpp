/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d487c
 * function: operation_8c0d487c
 * language: c++
 * reference size: 500 bytes
 * compiled size: 500 bytes (+0.0%)
 * differing lines: 74 of 155 reference instruction lines
 * differing bytes: 122
 * provenance: generator draft (mode ccastext)
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
typedef struct S_g8c46fd8c S_g8c46fd8c;
typedef struct S_g8c46fd94 S_g8c46fd94;
typedef struct S_g8c46fd9c S_g8c46fd9c;
typedef struct S_g8c46fdac S_g8c46fdac;
typedef struct S_g8c46fdac_42c S_g8c46fdac_42c;
typedef struct Object Object;
class Arg0_s404;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x4];
    float f40;
    char unknown44[0xa4];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x96];
    short f1ae;
    char unknown1b0[0x1bc];
    void *f36c;
    char unknown370[0x28];
    float f398;
    char unknown39c[0x40];
    int f3dc;
    int f3e0;
    float f3e4;
    float f3e8;
    int f3ec;
    int f3f0;
    int f3f4;
    short f3f8;
    char unknown3fa[0x2];
    int f3fc;
    int f400;
    char unknown404[0x1c];
    int f420;
    int f424;
    int f428;
    float f42c;
    float f430;
    float f434;
    float f438;
    float f43c;
    int f440;
    int f444;
};
struct S_g8c46fdac {
    char unknown0[0x42c];
    S_g8c46fdac_42c *f42c;
    int f430;
};
struct S_g8c46fdac_42c {
    char unknown0[0x8];
    int f08;
};
class Arg0_s404 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct Arg0_s404Data {

} Arg0_s404Data;
extern S_g8c46fdac *g_8c46fdac;
extern "C" void operation_8c0d487c(Object *o)
{
    int v1;
    int v2;
    int v3;
    int t1;
    int t2;
    ((void (*)(Object *))0x8c059c74)(o);
    ((void (*)(Object *))0x8c0d5048)(o);
    o->f38 = (int)(g_8c46fdac->f42c->f08);
    ((void (*)(Object *, void *, int))0x8c05af60)(o, (void *)0x8c30707c, 1);
    o->fe8 = 0;
    o->f110 = (void *)(void *)0x8c3070ec;
    o->f114 = (int)(g_8c46fdac->f430);
    o->ff0 = 0;
    ((void (*)(Object *, short))0x8c01c838)(o, o->ff0);
    v1 = (int)(o->f3dc << 2);
    ((void (*)(Object *, void *, void *, void *))0x8c05b950)(o, *(S_g8c46fd8c **)((char *)0x8c46fd8c + (v1)), *(S_g8c46fd94 **)((char *)0x8c46fd94 + (v1)), *(S_g8c46fd9c **)((char *)0x8c46fd9c + (v1)));
    ((void (*)(Object *))0x8c05b68c)(o);
    o->f36c = (void *)(void *)0x8c307060;
    o->f398 = 10.0f;
    ((void (*)(Object *, int))0x8c05bf44)(o, 0x1e);
    ((void (*)(Object *, int))0x8c05c1bc)(o, 0x1e);
    o->f3e0 = 0;
    o->f3e4 = o->f40;
    o->f3e8 = 0.0f;
    o->f3ec = 0;
    o->f3f4 = 0;
    o->f3f0 = 0;
    o->f3f8 = o->f1ae;
    v2 = (int)-0xffff01;
    v3 = (int)-0x5f7fff60;
    t1 = ((int (*)(int, int))0x8c108698)(v2, v3);
    o->f3fc = (int)t1;
    t2 = ((int (*)(int, int))0x8c108698)(-0xffff01, -0x5f7fff60);
    o->f400 = (int)t2;
    ((Arg0_s404 *)((char *)o + 0x404))->v3();
    o->f420 = 0;
    o->f424 = 0;
    o->f428 = 0;
    o->f42c = 0.0f;
    o->f430 = 0.0f;
    o->f434 = 0.0f;
    o->f438 = 0.0f;
    o->f43c = 0.0f;
    o->f440 = 0;
    o->f444 = 0;
}
