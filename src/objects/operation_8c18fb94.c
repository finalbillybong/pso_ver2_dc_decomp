typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct S_L8c2875d0 S_L8c2875d0;
typedef struct Frame Frame;
typedef struct S_g8c4dc294 S_g8c4dc294;
typedef struct S_g8c4dc294_0 S_g8c4dc294_0;
typedef struct S_g8c4dc5a4 S_g8c4dc5a4;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv4 S_vv4;
typedef struct Block_frame_0 {
    char f00;
    char f01;
    char f02;
    char unknown3[0x11];
} Block_frame_0;
struct S_g8c4dc294 {
    S_g8c4dc294_0 *f00;
};
struct S_vv1 {
    int f00;
    unsigned char f04;
};
struct S_vv2 {
    unsigned char f00;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_L8c2875d0 {
    char unknown0[0x4];
    int f04;
};
struct S_vv4 {
    Block20 f00;
};
extern int g_8c4dc288;
extern S_g8c4dc294 *g_8c4dc294;
extern S_g8c4dc5a4 *g_8c4dc5a4;
extern S_L8c2875d0 g_8c2875d0;
extern char g_8c4dc120[];
extern int level_class_8c1901a8(int);
extern void operation_1c7dd4(void *);
void operation_8c18fb94(void)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    int v3;
    int t1;
    t1 = level_class_8c1901a8((int)g_8c4dc5a4);
    if (t1 >= 0) {
        v1 = (S_vv1 *)g_8c4dc294->f00;
        t1 *= v1->f04;
        v2 = (S_vv2 *)((char *)v1->f00 + t1);
        for (v3 = 0; v1->f04 > v3; v3++, v2 = (S_vv2 *)((char *)v2 + 1)) {
            if (v2->f00 != 0xf) {
                operation_1c7dd4((void *)(&frame));
                (&frame)->f00.f00 = 3;
                (&frame)->f00.f01 = *(int *)((char *)&g_8c2875d0 + (v2->f00 << 3));
                (&frame)->f00.f02 = *(int *)((char *)&g_8c2875d0.f04 + (v2->f00 << 3));
                *(Block20 *)(g_8c4dc120 + g_8c4dc288++ * 0x14) = *(Block20 *)&(&frame)->f00;
            }
        }
    }
}
