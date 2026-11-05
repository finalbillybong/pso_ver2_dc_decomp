/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1549b0
 * function: operation_8c1549b0
 * language: c
 * reference size: 268 bytes
 * compiled size: 268 bytes (+0.0%)
 * differing lines: 4 of 108 reference instruction lines
 * differing bytes: 5
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
typedef struct S_vv3 S_vv3;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
typedef struct Block_vv3_3c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_vv3_3c;
struct S_vv3 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    Block_vv3_3c f3c;
};
struct Frame {
    Block_frame_0 f00;
};
extern float distance_xz(void *, void *);
extern void vector_sub_in_place_8c37f6f0(Frame *, int);
extern float errno_wrap_8c130334(float, float);
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern void call_8c3bdf60(Frame *, int);
void operation_8c1549b0(int a0)
{
    Frame frame;
    S_vv3 *v3;
    int v2;
    int v1;
    int v4;
    float t1;
    float t2;
    float t3;
    float t4;
    v2 = (int)0;
    v1 = (int)0xc000;
    while (*(int *)0x8c467874 > v2) {
        v3 = (S_vv3 *)*(S_g8c467240 **)((char *)0x8c467240 + (v2 << 2));
        if (v3 != 0 && ((v3->f20 & v1)) == 0) {
            t1 = distance_xz((void *)(a0 + 0x3c), (void *)((int)v3 + 0x3c));
            if (!(t1 > 1225.0f)) {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v3->f3c;
                vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (int)(a0 + 0x3c));
                t4 = errno_wrap_8c130334((&frame)->f00.f08, (&frame)->f00.f00);
                v4 = (int)(int)(65536.0f * t4 / 6.28318405f);
                t2 = njCos_8c38c154(v4);
                (&frame)->f00.f00 = t2 * 50.0f;
                t3 = njSin_8c37eb0c(v4);
                (&frame)->f00.f08 = t3 * 50.0f;
                call_8c3bdf60((Frame *)((&frame)), (int)(a0 + 0x3c));
                v3->f3c.f00 = (&frame)->f00.f00;
                v3->f3c.f08 = (&frame)->f00.f08;
            }
        }
        v2 = (int)(v2 + 1);
    }
}
