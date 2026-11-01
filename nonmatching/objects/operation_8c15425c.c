/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15425c
 * function: operation_8c15425c
 * language: c
 * reference size: 256 bytes
 * compiled size: 256 bytes (+0.0%)
 * differing lines: 36 of 97 reference instruction lines
 * differing bytes: 53
 * provenance: generator draft (mode bgotoext)
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
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
extern int g_8c418244;
extern int rand(void);
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern void create_effect_777c(void *, int);
extern void call_8c05fd7c(int, Object *, void *, int, int);
void operation_8c15425c(Object *o)
{
    Frame frame;
    int v2;
    float v1;
    float t1;
    int t2;
    float t3;
    int t4;
    int t5;
    if (((g_8c418244 & 1)) != 0) {
        t4 = rand();
        v1 = (float)((float)t4 / 32768.0f * 10.0f + 35.0f);
        t5 = rand();
        v2 = (int)(int)((float)t5 / 32768.0f * 360.0f * 65536.0f / 360.0f);
        t1 = njCos_8c38c154(v2);
        (&frame)->f00 = v1 * t1 + o->f3c;
        t2 = rand();
        (&frame)->f04 = (float)t2 / 32768.0f * 30.0f + 20.0f;
        t3 = njSin_8c37eb0c(v2);
        (&frame)->f08 = v1 * t3 + o->f44;
        create_effect_777c((void *)(&frame), 0xfb);
    }
    call_8c05fd7c(0x30021, o, (void *)(&o->f3c), 0, 0);
}
