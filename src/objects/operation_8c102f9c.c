typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_L8c4d5998 S_L8c4d5998;
typedef struct Frame Frame;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct S_vv1 S_vv1;
typedef struct S_x71632 S_x71632;
typedef struct S_x94160 S_x94160;
typedef struct Block_frame_0 {
    float f00;
    float f04;
} Block_frame_0;
typedef struct Block_frame_8 {
    float f00;
    float f04;
} Block_frame_8;
struct Frame {
    Block_frame_0 f00;
    Block_frame_8 f08;
};
struct S_vv1 {
    char unknown0[0x138];
    int f138;
};
struct S_x71632 {
    float f00;
};
struct S_x94160 {
    float f00;
};
struct S_L8c4d5998 {
    float f00;
    char unknown4[0x4];
    float f08;
};
extern Block8 g_8c30b0d4;
extern int g_8c4d5954;
extern S_g8c4d59d8 *g_8c4d59d8;
extern S_L8c4d5998 g_8c4d5998;
void operation_8c102f9c(void)
{
    Frame frame;
    S_vv1 *v1;
    int v2;
    g_8c4d5954 = 1;
    v1 = (S_vv1 *)g_8c4d59d8;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c30b0d4;
    v2 = (int)v1->f138;
    if (v2 >= 0) {
        (&frame)->f00.f00 = ((S_x71632 *)((int)v1 + 0x98 + v2 * 0x28))->f00;
        (&frame)->f00.f04 = ((S_x94160 *)((int)v1 + 0xa0 + v2 * 0x28))->f00;
    }
    *(Block8 *)&(&frame)->f08 = *(Block8 *)&(&frame)->f00;
    (&g_8c4d5998)->f00 = (&frame)->f08.f00;
    (&g_8c4d5998)->f08 = (&frame)->f08.f04;
}
