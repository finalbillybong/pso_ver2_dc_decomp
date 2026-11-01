/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c154bb0
 * function: operation_8c154bb0
 * language: c
 * reference size: 336 bytes
 * compiled size: 336 bytes (+0.0%)
 * differing lines: 74 of 133 reference instruction lines
 * differing bytes: 75
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
typedef struct S_vv5 S_vv5;
typedef struct S_x12784 S_x12784;
typedef struct S_x95056 S_x95056;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x350];
    short f3b8;
};
struct S_vv5 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_x95056 {
    Vector3 f00;
};
struct S_x12784 {
    Vector3 f00;
};
extern int g_8c467874;
extern int g_8c4d9b9c;
extern void vector_sub_in_place_8c37f6f0(Frame *, int);
extern float call_8c130334(float, float);
extern int angle_difference(int, int);
void operation_8c154bb0(Object *o)
{
    Frame frame;
    S_vv5 *v5;
    int v4;
    unsigned short v22;
    unsigned short v6;
    int v2;
    int v7;
    int v1;
    int v3;
    float t1;
    int t2;
    if (g_8c4d9b9c != 0) {
        v1 = (int)0x471c;
    } else {
        v1 = (int)0x31c7;
    }
    o->f3b8 = 0;
    v7 = (int)0x3b8;
    v2 = (int)0x324;
    v4 = (int)0;
    v3 = (int)0x3c4;
    while (g_8c467874 > v4) {
        v5 = (S_vv5 *)*(S_g8c467240 **)((char *)0x8c467240 + (v4 << 2));
        if (v5 != 0) {
            v6 = (unsigned short)v5->f20;
            v22 = (unsigned short)0x1000;
            if (v6 < v22 && ((v5->f34 & 0x2000800)) == 0) {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x95056 *)((int)v5 + v2))->f00;
                vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (int)((int)o + v2));
                t1 = call_8c130334((&frame)->f00.f00, (&frame)->f00.f08);
                t2 = angle_difference((int)((int)o->f64 + 0x4000), (int)((int)(t1 * 65536.0f / 6.28318405f)));
                if (v1 >= t2) {
                    *(short *)((char *)((char *)o + 0x3ba) + (*(short *)((char *)o + v7) << 1)) = v5->f20;
                    *(Vector3 *)&((S_x12784 *)((int)o + v3 + *(short *)((char *)o + v7) * 0xc))->f00 = *(Vector3 *)&v5->f3c;
                    *(short *)((char *)o + v7) += 1;
                    if (*(short *)((char *)o + v7) >= 4) {
                        return;
                    }
                }
            }
        }
        v4 = (int)(v4 + 1);
    }
}
