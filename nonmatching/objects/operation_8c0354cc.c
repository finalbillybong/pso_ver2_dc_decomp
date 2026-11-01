/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0354cc
 * function: operation_8c0354cc
 * language: c
 * reference size: 304 bytes
 * compiled size: 304 bytes (+0.0%)
 * differing lines: 44 of 126 reference instruction lines
 * differing bytes: 56
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block80 {
    int words[20];
} Block80;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_20 S_vv2_20;
typedef struct S_vv2_20_0 S_vv2_20_0;
typedef struct S_vv2_24 S_vv2_24;
typedef struct S_vv2_24_0 S_vv2_24_0;
typedef struct S_vv2_28 S_vv2_28;
typedef struct Block_p0_0 {
    char unknown0[0x3e];
    short f3e;
    short f40;
    char unknown42[0xe];
} Block_p0_0;
struct Object {
    Block_p0_0 tag;
    int f50;
    char unknown54[0x128];
    int f17c;
    char unknown180[0x128];
    int f2a8;
    char unknown2ac[0x138];
    int f3e4;
};
struct Arg2 {
    Block80 f00;
};
struct S_vv2 {
    char unknown0[0x20];
    S_vv2_20 *f20;
    S_vv2_24 *f24;
    S_vv2_28 *f28;
};
struct Frame {
    Object *f00;
    void *f04;
    int f08;
    void *f0c;
    void *f10;
    void *f14;
    void *f18;
    void *f1c;
};
extern char g_8c2f5b38[];
extern int operation_8c034c7c(void *);
extern void call_8c034b20(void *, Object *, S_vv2 *, void *);
extern void TObjCMLoadPlDataReq_create_8c13fe90(int, int);
Object *operation_8c0354cc(Object *o, int a1, Arg2 *a2, int a3)
{
    Frame frame;
    int v1;
    S_vv2 *v2;
    int t1;
    *(Block80 *)&o->tag = *(Block80 *)&a2->f00;
    o->f3e4 = 0xff;
    t1 = operation_8c034c7c((void *)o);
    v1 = (int)0;
    o->f50 = (int)(v1);
    v2 = (S_vv2 *)(t1 * 0x2c + g_8c2f5b38);
    if (v2->f20 != 0 && *(int *)((char *)((char *)v2->f20 + 0x0) + (o->tag.f40 << 2)) != 0) {
        call_8c034b20((void *)(&o->f50), o, v2, (void *)(*(S_vv2_20_0 **)((char *)((char *)v2->f20 + 0x0) + (o->tag.f40 << 2))));
        o->f50 = 1;
    }
    o->f17c = 0;
    if (v2->f24 != 0 && *(int *)((char *)((char *)v2->f24 + 0x0) + (o->tag.f3e << 2)) != 0) {
        call_8c034b20((void *)(&o->f17c), o, v2, (void *)(*(S_vv2_24_0 **)((char *)((char *)v2->f24 + 0x0) + (o->tag.f3e << 2))));
        o->f17c = 1;
    }
    call_8c034b20((void *)(&o->f2a8), o, v2, (void *)(v2->f28));
    o->f2a8 = 1;
    (&frame)->f00 = o;
    (&frame)->f04 = &o->f3e4;
    (&frame)->f08 = a3;
    (&frame)->f0c = (char *)o + 0x3e0;
    (&frame)->f10 = (char *)o + 0x3d4;
    (&frame)->f14 = (char *)o + 0x3cc;
    (&frame)->f18 = (char *)o + 0x2a0;
    (&frame)->f1c = (char *)o + 0x174;
    TObjCMLoadPlDataReq_create_8c13fe90(a1, (int)(&frame));
    return o;
}
