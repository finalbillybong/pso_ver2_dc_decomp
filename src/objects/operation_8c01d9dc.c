typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Block60 {
    int words[15];
} Block60;
typedef struct S_L8c2e3470 S_L8c2e3470;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    Block16 f00;
    short f10;
    short f12;
    short f14;
    short f16;
    int f18;
    float f1c;
    char unknown20[0x14];
    int f34;
    int f38;
};
struct S_L8c2e3470 {
    char unknown0[0x8];
    Block16 f08;
    short f18;
    short f1a;
    short f1c;
    short f1e;
};
extern S_L8c2e3470 g_8c2e3470;
extern char g_8c41cba0[];
void operation_8c01d9dc(void)
{
    int i;
    S_vv2 *p;
    int j;
    p = (S_vv2 *)(g_8c41cba0 + 0x20);
    for (i = 0; i < 4; i++) {
        p->f00.words[0] = g_8c2e3470.f08.words[0];
        p->f00.words[1] = g_8c2e3470.f08.words[1];
        p->f00.words[2] = g_8c2e3470.f08.words[2];
        p->f00.words[3] = g_8c2e3470.f08.words[3];
        p->f12 = g_8c2e3470.f1a;
        p->f10 = g_8c2e3470.f18;
        p->f14 = g_8c2e3470.f1c;
        p->f16 = g_8c2e3470.f1e;
        p->f18 = 0;
        p->f1c = 0.0f;
        for (j = 0; j < 10; j++) {
            *(short *)((char *)((char *)p + 0x20) + (j << 1)) = 0;
        }
        p->f34 = 0;
        p->f38 = 0;
        p++;
    }
    *(Block60 *)(g_8c41cba0 + 0x110) = *(Block60 *)(g_8c41cba0 + 0x20);
}
