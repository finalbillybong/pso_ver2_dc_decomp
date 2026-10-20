typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c4dc2ec S_g8c4dc2ec;
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_vv2_0_14 S_vv2_0_14;
typedef struct S_vv4_c S_vv4_c;
class S_vv4;
typedef struct Block_frame_0 {
    int f00;
    int f04;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_vv2_0 {
    char unknown0[0x14];
    S_vv2_0_14 *f14;
};
class S_vv4 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_vv4Data {
    char unknown0[0xc];
    S_vv4_c *f0c;
    char unknown10[0x10];
    int f20;
} S_vv4Data;
extern Block8 g_8c31a330;
extern int g_8c4dc2e4;
extern int g_8c4dc2e8;
extern S_g8c4dc2ec *g_8c4dc2ec;
extern "C" void operation_8c193134(int a0)
{
    Frame frame;
    S_vv4 *v4;
    int v3;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c31a330;
    (&frame)->f00.f00 = (int)(g_8c4dc2e8);
    (&frame)->f00.f04 = (int)(g_8c4dc2e4);

    for (v3 = 0; v3 != 2; v3++) {
        if (*(int *)((char *)&frame + (v3 << 2)) != 0) {
            for (v4 = (S_vv4 *)(*(S_vv2_0 **)((char *)&frame + (v3 << 2)))->f14; v4 != 0; v4 = (S_vv4 *)((S_vv4Data *)v4)->f0c) {
                if (a0 == ((S_vv4Data *)v4)->f20) {
                    if (v4 != 0) {
                        v4->v0(1);
                    }
                    *(int *)((char *)g_8c4dc2ec + (a0 << 2)) = 0;
                    return;
                }
            }
        }
    }
}
