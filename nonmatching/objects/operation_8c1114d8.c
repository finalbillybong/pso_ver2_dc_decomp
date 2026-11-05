/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1114d8
 * function: operation_8c1114d8
 * language: c
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 16 of 92 reference instruction lines
 * differing bytes: 54
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
typedef struct Block_c8c021ef8_3c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_c8c021ef8_3c;
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    Block_frame_c f0c;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Block_c8c021ef8_3c f3c;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern float errno_wrap_8c130334(float, float);
extern void operation_8c036840(int);
void operation_8c1114d8(int a0, int a1)
{
    int pm5;
    int pm9;
    Frame frame;
    S_c8c021ef8 *t1;
    short pm7;
    float pm10;
    int pm11;
    pm5 = (int)((unsigned short)a0);
    t1 = lookup_low_id(pm5);
    if (!(t1 == 0)) {
        S_c8c021ef8 *t2;
        pm5 = (int)((unsigned short)a1);
        t2 = lookup_low_id(pm5);
        if (!(t2 == 0)) {
            float t3;
            int pm8;
            char pm6;
            int pm12;
            float pm4;
            Vector3 *pm13;
            pm11 = (signed char)(0x1a);
            (&frame)->f00 = (int)(int)pm11;
            (&frame)->f01 = (char)1;
            pm7 = 0x3d;
            pm6 = 1;
            (&frame)->f00 = (char)pm7;
            (&frame)->f01 = (char)pm6;
            pm9 = (unsigned char)(0);
            (&frame)->f04 = (unsigned short)(pm9);
            (&frame)->f06 = 0;
            a1 = -1;
            (&frame)->f08 = (short)a1;
            pm11 = (short)(-1);
            (&frame)->f0a = pm11;
            (&frame)->f0c.f08 = 0.0f;
            (&frame)->f0c.f04 = 0.0f;
            (&frame)->f0c.f00 = 0.0f;
            (&frame)->f00 = (char)0x3e;
            pm12 = 6;
            (&frame)->f01 = (char)pm12;
            t3 = errno_wrap_8c130334(t2->f3c.f00 - t1->f3c.f00, t2->f3c.f08 - t1->f3c.f08);
            pm10 = 65536.0f * t3;
            (&frame)->f02 = a0;
            pm13 = (Vector3 *)&t1->f3c;
            pm4 = pm10 / 6.28318405f;
            *(Vector3 *)&(&frame)->f0c = *pm13;
            pm5 = (int)(pm4);
            a1 = (int)(&frame);
            a0 = pm5;
            pm8 = a1;
            (&frame)->f06 = (short)a0;
            operation_8c036840(pm8);
        }
    }
}
