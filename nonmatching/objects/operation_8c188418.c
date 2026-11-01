/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c188418
 * function: operation_8c188418
 * language: c
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 38 of 104 reference instruction lines
 * differing bytes: 115
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    int f24;
    float f28;
    float f2c;
    Vector3 f30;
    char unknown3c[0xc];
    float f48;
};
struct Frame {
    Block_frame_0 f00;
};
extern int rand(void);
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern void create_effect_7ab8(void *, void *, int);
void operation_8c188418(Object *o)
{
    Frame frame;
    float v2;
    int v1;
    float v3;
    float t1;
    float t2;
    int t3;
    int t4;
    o->f2c += o->f28;
    while (!(1.0f > o->f2c)) {
        t3 = rand();
        v1 = (int)(int)((float)t3 / 32768.0f * 360.0f * 65536.0f / 360.0f);
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f30;
        t4 = rand();
        v2 = (float)o->f48;
        v3 = (float)(v2 * ((float)t4 / 32768.0f));
        t1 = njCos_8c38c154(v1);
        (&frame)->f00.f00 += v3 * t1;
        t2 = njSin_8c37eb0c(v1);
        (&frame)->f00.f08 += v3 * t2;
        create_effect_7ab8((void *)(&frame), (void *)(((char *)o + 0x3c)), (int)(o->f20));
        o->f2c -= 1.0f;
    }
    if (!(--o->f24 > 0)) {
        o->f04 |= 1;
    }
}
