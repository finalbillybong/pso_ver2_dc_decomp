/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15ea6c
 * function: operation_8c15ea6c
 * language: c
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 40 of 82 reference instruction lines
 * differing bytes: 59
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
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct S_x12880 S_x12880;
typedef struct S_x14480 S_x14480;
typedef struct Block_p0_3a8 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3a8;
struct Object {
    char unknown0[0x39c];
    int f39c;
    char unknown3a0[0x8];
    Block_p0_3a8 f3a8;
    int f3b4;
    Arg0_3b8 *f3b8;
};
struct S_x12880 {
    float f00;
};
struct S_x14480 {
    float f00;
};
struct Arg0_3b8 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
};
extern char g_8c286408[];
extern char g_8c286410[];
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
void operation_8c15ea6c(Object *o)
{
    char *v3;
    char *v4;
    float v1;
    float v2;
    float t1;
    float t2;
    int off;
    off = o->f39c * 0xc;
    v1 = (float)((S_x12880 *)(off + g_8c286408))->f00;
    v2 = (float)((S_x14480 *)((char *)(int *)(g_8c286408 + 8) + off))->f00;
    v3 = (char *)o->f3b8->f64;
    t2 = njSin_8c37eb0c((int)(v3));
    v4 = (char *)o->f3b8->f64;
    t1 = njCos_8c38c154((int)(v4));
    *(Vector3 *)&o->f3a8 = *(Vector3 *)&o->f3b8->f3c;
    o->f3a8.f00 = v1 * t1 + v2 * t2 + o->f3a8.f00;
    o->f3a8.f08 = -v1 * t2 + v2 * t1 + o->f3a8.f08;
    o->f3b4 = (int)(o->f3b8->f64);
    o->f3b4 += *(int *)((char *)0x8c286420 + (o->f39c << 2));
}
