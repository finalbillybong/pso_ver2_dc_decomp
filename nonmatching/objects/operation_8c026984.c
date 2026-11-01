/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c026984
 * function: operation_8c026984
 * language: c
 * reference size: 384 bytes
 * compiled size: 380 bytes (-1.0%)
 * differing lines: 36 of 153 reference instruction lines
 * differing bytes: 247
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
struct Object {
    unsigned short tag;
    short f02;
    int f04;
    float f08;
    float f0c;
    float f10;
    int f14;
    int dispatch;
    int f1c;
    short f20;
    short f22;
    short f24;
    short f26;
    char unknown28[0x3c];
    int f64;
    char f68;
    char f69;
    short f6a;
    int f6c;
    int f70;
    int f74;
    unsigned short f78;
    short f7a;
    int f7c;
    float f80;
    float f84;
    float f88;
    int f8c;
    int f90;
    int f94;
    short f98;
    short f9a;
    char unknown9c[0x4];
    float fa0;
    float fa4;
    float fa8;
    int fac;
    int fb0;
    char unknownb4[0x88];
    int f13c;
};
struct S_vv3 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
extern void call_8c18e044(void *, void *, int, int, int);
extern void operation_1c7dd4(void *);
Object *operation_8c026984(Object *o)
{
    int v2;
    S_vv3 *v3;
    int off;
    int v1;
    int v5;
    int v4;
    call_8c18e044((void *)(((char *)o + 0x28)), (void *)((void *)0x8c026b04), 0, 0xc, 5);
    o->f68 = 0;
    o->f69 = 0;
    v1 = (int)-1;
    o->f6a = 0;
    o->f6c = 0;
    o->f70 = 0;
    o->f74 = 0;
    o->f90 = 0;
    o->f78 = 0xffff;
    o->f7c = 0;
    o->f80 = 0.0f;
    o->f84 = 0.0f;
    o->f88 = 0.0f;
    o->f8c = 0;
    o->f7a = 0;
    o->f90 = 0xffff;
    o->f94 = 0;
    o->f98 = 0;
    o->f9a = 0;
    o->fa0 = 0.0f;
    o->fa8 = 0.0f;
    o->fa4 = 0.0f;
    off = 0x13c;
    *(int *)((char *)o + off) = 0;
    v2 = (int)0;
    while (0x1e > v2) {
        v3 = (S_vv3 *)((char *)o + off + v2 * 0x1c + 4);
        v3->f00 = 0;
        v3->f01 = v1;
        v3->f04 = 0;
        v3->f03 = 0;
        v3->f02 = 0;
        operation_1c7dd4((void *)((int)v3 + 8));
        v2 = (int)(v2 + 1);
    }
    o->tag = 0xffff;
    o->f02 = 0;
    o->f04 = 0;
    o->f10 = 0.0f;
    o->f0c = 0.0f;
    o->f08 = 0.0f;
    o->f1c = 0;
    o->dispatch = 0;
    o->f14 = 0;
    o->f20 = 0;
    o->f22 = 0;
    o->f24 = 0;
    o->f26 = 0;
    o->f64 = 0;
    o->fac = 0;
    o->fb0 = 0;
    v5 = (int)0;
    v4 = (int)-1;
    while (0x13 > v5) {
        *(char *)((char *)((char *)o + 0xb4) + (v5)) = v4;
        v5 = (int)(v5 + 1);
    }
    return o;
}
