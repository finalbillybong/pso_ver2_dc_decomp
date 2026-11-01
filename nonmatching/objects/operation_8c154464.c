/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c154464
 * function: operation_8c154464
 * language: c
 * reference size: 288 bytes
 * compiled size: 288 bytes (+0.0%)
 * differing lines: 26 of 114 reference instruction lines
 * differing bytes: 27
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
typedef struct S_x36432 S_x36432;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x348];
    short f3b0;
};
struct S_vv5 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x344];
    int f37c;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_x36432 {
    Vector3 f00;
};
extern int g_8c467874;
extern void vector_sub_in_place_8c37f6f0(Frame *, int);
extern float call_8c130334(float, float);
extern int angle_difference(int, int);
int operation_8c154464(Object *o)
{
    Frame frame;
    S_vv5 *v5;
    int v4;
    unsigned short lim;
    int v1;
    int v3;
    int v2;
    int off;
    float t1;
    short v7;
    int i;
    short *pf1;
    o->f3b0 = 0;
    v1 = 0x324;
    v2 = 0x1c71;
    v3 = 0x3a8;
    off = 0x3b0;
    for (v4 = 0; g_8c467874 > v4; v4++) {
        v5 = *(S_vv5 **)((char *)0x8c467240 + (v4 << 2));
        if (v5 == 0) {
            break;
        }
        lim = 0x1000;
        if (!(v5->f20 < lim)) {
            break;
        }
        if (v5->f37c == 0xd && ((v5->f34 & 0x2000800)) == 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x36432 *)((int)v5 + v1))->f00;
            vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (int)((int)o + v1));
            if (v2 >= angle_difference((int)((int)o->f64 + 0x8000), (int)(call_8c130334((&frame)->f00.f00, (&frame)->f00.f08) * 65536.0f / 6.28318405f))) {
                pf1 = (short *)((char *)o + off);
                v7 = *pf1;
                i = v7;
                *pf1 = v7 + 1;
                *(short *)((char *)o + v3 + (i << 1)) = v5->f20;
                if (*(short *)((char *)o + off) >= 4) {
                    break;
                }
            }
        }
    }
    return o->f3b0;
}
