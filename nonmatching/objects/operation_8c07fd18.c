/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07fd18
 * function: operation_8c07fd18
 * language: c
 * reference size: 72 bytes
 * compiled size: 72 bytes (+0.0%)
 * differing lines: 10 of 30 reference instruction lines
 * differing bytes: 6
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_g8c469b60 S_g8c469b60;
typedef struct S_g8c469b60_4 S_g8c469b60_4;
typedef struct S_g8c469b60_4_14 S_g8c469b60_4_14;
typedef struct Object Object;
struct Object {
    char unknown0[0x136];
    unsigned char f136;
};
struct S_g8c469b60 {
    char unknown0[0x4];
    S_g8c469b60_4 *f04;
};
struct S_g8c469b60_4 {
    char unknown0[0x14];
    S_g8c469b60_4_14 *f14;
};
extern S_g8c469b60 *g_8c469b60;
extern void call_8c074ec4(void);
void operation_8c07fd18(Object *o)
{
    unsigned char v1;
    int v2;
    int v4;
    v1 = (unsigned char)o->f136;
    v2 = (int)v1;
    if ((unsigned int)(unsigned char)v1 >= (unsigned int)0x39) {
        v2 = (int)0x39;
    }
    if ((unsigned int)0x39 >= (unsigned int)(unsigned char)v2) {
        v4 = (int)*(char *)((char *)((char *)g_8c469b60->f04->f14 + 0x0) + ((unsigned char)v2));
    } else {
        v4 = (int)0;
    }
    if (4 > v4) {
        call_8c074ec4();
    }
}
