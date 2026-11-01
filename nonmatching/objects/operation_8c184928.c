/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c184928
 * function: operation_8c184928
 * language: c
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 62 of 82 reference instruction lines
 * differing bytes: 57
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
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
struct Object {
    char tag;
    char unknown1[0x3];
    short f04;
    short f06;
    int f08;
    float f0c;
    float f10;
    char unknown14[0x28];
    unsigned short f3c;
    char unknown3e[0x2];
    float f40;
    int f44;
    char unknown48[0x48];
    int f90;
    int f94;
};
struct S_vv2 {
    char f00;
};
extern void call_8c18e044(void *, void *, int, int, int);
extern void operation_8c01ef40();
extern void operation_8c1849f4();
extern void operation_8c184a04();
Object *operation_8c184928(Object *o)
{
    S_vv2 *v2;
    int v1;
    call_8c18e044((void *)(((char *)o + 0x14)), operation_8c01ef40, 0, 4, 0xa);
    o->f44 = 0;
    call_8c18e044((void *)(((char *)o + 0x48)), (void *)((void *)0x8c184a14), 0, 4, 0xc);
    call_8c18e044((void *)(((char *)o + 0x78)), operation_8c184a04, 0, 4, 4);
    call_8c18e044((void *)(((char *)o + 0x98)), operation_8c1849f4, 0, 4, 4);
    o->f90 = 0;
    o->f94 = 0;
    o->tag = 0;
    o->f04 = 0;
    o->f06 = 0;
    o->f08 = 0;
    o->f0c = 1.0f;
    o->f10 = 0.0f;
    o->f3c = 0xffff;
    o->f40 = 0.0f;
    v1 = (int)0;
    v2 = (S_vv2 *)((char *)o + 0x88);
    while (6 > v1) {
        v2->f00 = 0;
        v1 = (int)(v1 + 1);
        v2 = (S_vv2 *)((char *)v2 + 1);
    }
    return o;
}
