/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b1884
 * function: operation_8c1b1884
 * language: c
 * reference size: 340 bytes
 * compiled size: 340 bytes (+0.0%)
 * differing lines: 22 of 141 reference instruction lines
 * differing bytes: 40
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
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv5 S_vv5;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
typedef struct Block_p1_0 {
    float f00;
    float f04;
    float f08;
} Block_p1_0;
struct S_vv5 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    Vector3 f3c;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
};
struct Arg1 {
    Block_p1_0 f00;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
extern int g_8c467874;
extern int ring_actor_eligible(unsigned short);
extern float call_8c38d7d8(Frame *, void *);
extern float object_random_fraction(void *);
extern float errno_wrap_8c130334(float, float);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
void operation_8c1b1884(Object *o, Arg1 *a1)
{
    Frame frame;
    float v2;
    S_vv5 *v5;
    int v16;
    int v1;
    float v4;
    int v3;
    float v15;
    int t1;
    float t7;
    float t2;
    float t3;
    float t4;
    float t5;
    float t6;
    v1 = (int)0;
    v3 = 0;
    v2 = (float)0.0f;
    for (v4 = (float)v2; v3 < g_8c467874; v3 += 1) {
        v5 = (S_vv5 *)*(S_g8c467240 **)((v3 << 2) + (char *)0x8c467240);
        if (0 != v5) {
            t1 = ring_actor_eligible((unsigned short)((int)v5->f20));
            if (0 != t1) {
                Frame *pm9;
                pm9 = &frame;
                *(Vector3 *)&(pm9)->f00 = *(Vector3 *)&v5->f3c;
                (&frame)->f00.f04 = 0.0f;
                t2 = call_8c38d7d8((Frame *)((&frame)), (void *)(&o->f3c));
                if (!(t2 > 560.0f)) {
                    if (t2 > v4) {
                        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&(&frame)->f00;
                        v1 = (int)v5;
                        v4 = (float)t2;
                    }
                }
            }
        }
    }
    if (v1 != 0) {
        *(Vector3 *)&a1->f00 = *(Vector3 *)&(&frame)->f0c;
        return;
    }
    t5 = object_random_fraction((void *)o);
    v15 = (float)(t5 * 200.625f);
    t6 = object_random_fraction((void *)o);
    t7 = errno_wrap_8c130334(-o->f3c, -o->f44);
    t1 = -0x6000;
    v3 = (int)(49152.0f * t6) + t1 + (int)(t7 * 65536.0f / 6.28318405f);
    v16 = (int)(v3);
    t3 = njSin_8c37eb0c(v16);
    a1->f00.f00 = v15 * t3;
    a1->f00.f04 = 0.0f;
    t4 = njCos_8c38c154(v16);
    v4 = v15 * t4;
    a1->f00.f08 = v4;
}
