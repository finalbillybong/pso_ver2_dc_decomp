typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
    char f04;
    char unknown5[0x3];
    int f08[4];
};
extern int call_8c12b944(void);
extern void operation_8c036964(void *);
extern void operation_8c0368ec(void *);
void operation_8c24451c(void)
{
    Frame frame;
    int v1;
    int v2;
    int v3;
    int v4;
    int t;
    (&frame)->f00 = 0x7d;
    (&frame)->f01 = 6;
    (&frame)->f04 = 6;
    for (v1 = 0; v1 < 4; v1++) {
        *(int *)((char *)frame.f08 + (v1 << 2)) = v1;
    }
    for (v2 = 0; v2 < 0x1e; v2++) {
        v3 = (int)((float)call_8c12b944() / 32768.0f * 4.0f);
        v4 = (int)((float)call_8c12b944() / 32768.0f * 4.0f);
        if (v3 != v4) {
            t = *(int *)((char *)frame.f08 + (v3 << 2));
            *(int *)((char *)frame.f08 + (v3 << 2)) = *(int *)((char *)frame.f08 + (v4 << 2));
            *(int *)((char *)frame.f08 + (v4 << 2)) = t;
        }
    }
    operation_8c036964((void *)(&frame));
    operation_8c0368ec((void *)(&frame));
}
