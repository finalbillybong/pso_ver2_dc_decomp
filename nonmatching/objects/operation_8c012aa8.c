/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c012aa8
 * function: operation_8c012aa8
 * language: c
 * reference size: 224 bytes
 * compiled size: 220 bytes (-1.8%)
 * differing lines: 50 of 100 reference instruction lines
 * differing bytes: 204
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
typedef struct Arg0_s3c Arg0_s3c;
typedef struct Arg0_s54 Arg0_s54;
typedef struct Arg1 Arg1;
typedef struct S_x64720 S_x64720;
typedef struct S_x64976 S_x64976;
typedef struct Block_p0_54 {
    int f00;
    char unknown4[0x8];
} Block_p0_54;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0xa];
    short f2c;
    short f2e;
    short f30;
    char unknown32[0xa];
    int f3c;
    char unknown40[0x14];
    Block_p0_54 f54;
    Vector3 f60;
    char unknown6c[0x318];
    int f384;
    int f388;
};
struct Arg1 {
    short f00;
    char unknown2[0x4];
    short f06;
    short f08;
    short f0a;
    char unknownc[0x4];
    Vector3 f10;
    Vector3 f1c;
    char unknown28[0x14];
    short f3c;
    short f3e;
};
struct Arg0_s54 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_x64976 {
    float f00;
};
struct S_x64720 {
    float f00;
};
extern int g_8c418000;
extern void seed_random_state(void *, unsigned int);
void operation_8c012aa8(Object *o, Arg1 *a1)
{
    int v9;
    char *v8;
    int v1;
    int v4;
    char *v7;
    o->f20 = a1->f06;
    *(Vector3 *)&o->f54 = *(Vector3 *)&a1->f10;
    *(Vector3 *)&o->f3c = *(Vector3 *)&o->f54;
    *(Vector3 *)&o->f60 = *(Vector3 *)&a1->f1c;
    v4 = (int)0;
    goto L_8c012b16;
    v1 = (int)0;
L_8c012b04:;
    ((S_x64976 *)((char *)(int *)((char *)o + 0x370) + (v1 << 2)))->f00 = ((S_x64720 *)((char *)(int *)((char *)a1 + 0x28) + (v1 << 2)))->f00;
    v4 = (int)(v1 + 1);
L_8c012b16:;
    v1 = (int)v4;
    if (5 > v4) {
        goto L_8c012b04;
    }
    o->f384 = a1->f3c;
    o->f388 = a1->f3e;
    o->f2c = a1->f08;
    o->f2e = a1->f0a;
    o->f30 = a1->f00;
    seed_random_state((void *)(((char *)o + 0x1d4)), (unsigned int)(o->f20 + g_8c418000));
}
