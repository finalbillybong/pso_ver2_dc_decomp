typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
struct S_g8c4db9e8 {
    char unknown0[0x3208];
    int f3208;
};
struct Frame {
    char unknown0[0x4];
    unsigned char f04;
    unsigned char f05;
    unsigned char f06;
    char unknown7[0x5];
};
extern S_g8c4db9e8 *g_8c4db9e8;
extern int operation_8c087b9c(void);
extern void call_8c36d3ca(Frame *);
int operation_8c087a9c(void)
{
    Frame frame;
    int v2;
    int t1;
    int v3;
    if (g_8c4db9e8 == 0) {
        t1 = operation_8c087b9c();
        v2 = (int)t1;
    } else {
        v2 = (int)g_8c4db9e8->f3208;
    }
    call_8c36d3ca((Frame *)((&frame)));
    v3 = (&frame)->f04 * 0x3c;
    v3 = ((&frame)->f05 + v3) * 0x3c;
    v3 = (&frame)->f06 + v3;
    return (int)((float)v3 * 30.0f) + v2;
}
