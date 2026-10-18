typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv6 S_vv6;
struct Frame {
    char f00;
    char f01;
    short f02;
};
struct S_vv6 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
};
extern int g_8c418248;
extern void operation_8c0368a8(void *);
void operation_8c02a87c(void)
{
    Frame frame;
    int v1;
    int v3;
    S_vv6 *v6;
    int v8;
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x23;
    (&frame)->f01 = 1;
    if (g_8c418248 == 0xffff) {
        v6 = (S_vv6 *)0;
    } else {
        if (g_8c418248 >= 0xc) {
            v3 = (int)0;
        } else {
            v1 = (int)*(int *)((char *)0x8c41ce2c + (g_8c418248 << 2));
            v3 = (int)v1;
        }
        v6 = (S_vv6 *)v3;
    }
    if (v6 != 0) {
        if (v6 != 0) {
            v8 = (int)(v6->f308 == 2);
            if (v8 != 0) {
                return;
            }
        }
        (&frame)->f02 = v6->f20;
        operation_8c0368a8((void *)(&frame));
    }
}
