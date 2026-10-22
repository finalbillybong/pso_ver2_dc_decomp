typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4da87c S_g8c4da87c;
struct Frame {
    unsigned char f00;
    char f01;
    char unknown2[0x2];
    short f04;
    short f06[7];
};
struct S_g8c4da87c {
    char unknown0[0x10];
    float f10;
    float f14;
};
extern S_g8c4da87c *g_8c4da87c;
extern int call_8c12b944(void);
extern void operation_8c0368a8(void *);
void operation_8c154e08(void)
{
    Frame frame;
    int v1;
    float v2;
    float v3;
    int t1;
    (&frame)->f00 = 0x85;
    (&frame)->f01 = 5;
    (&frame)->f04 = 0;
    v1 = (int)0;
    while (3 > v1) {
        v2 = (float)g_8c4da87c->f14;
        v3 = (float)g_8c4da87c->f10;
        t1 = call_8c12b944();
        *(short *)((char *)frame.f06 + (v1 << 1)) = (int)((float)t1 / 32768.0f * v2 + v3);
        v1 = (int)(v1 + 1);
    }
    operation_8c0368a8((void *)(&frame));
}
