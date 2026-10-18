typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_20 S_frame_20;
struct Frame {
    char unknown0[0x20];
    S_frame_20 *f20;
    int f24;
    int f28;
};
extern int g_8c4df894;
extern int g_8c4df8a0;
extern void operation_8c1a7e14(void *, int, int);
extern void call_8c34d4e8(void *);
extern void operation_8c03ed70(int);
extern int call_8c18e768(int, int);
extern int call_8c011ea8(int, int);
extern void call_8c34d6ae(void *, int, int);
extern int call_8c34da3c(void *);
extern void operation_8c104c60(void);
int operation_8c1a85a8(int a0)
{
    Frame frame;
    int t1;
    int v4;
    int t2;
    int t3;
    operation_8c1a7e14((void *)(&frame), a0, 1);
    if (!(g_8c4df8a0 > 0)) {
        if ((&frame)->f28 == 0) {
            call_8c34d4e8((void *)((&frame)->f20));
        }
        if ((&frame)->f24 == 0) {
            operation_8c03ed70((int)((void *)0x8c323ed4));
        }
        return 0;
    }
    t2 = call_8c18e768((int)(g_8c4df8a0 + 0x7ff), 0x800);
    v4 = (int)(t2 << 0xb);
    t1 = call_8c011ea8(v4, a0);
    if (t1 == 0) {
        if ((&frame)->f28 == 0) {
            call_8c34d4e8((void *)((&frame)->f20));
        }
        if ((&frame)->f24 == 0) {
            operation_8c03ed70((int)((void *)0x8c323ed4));
        }
        return 0;
    }
    call_8c34d6ae((void *)((&frame)->f20), t2, t1);
    for (;;) {
        t3 = call_8c34da3c((void *)((&frame)->f20));
        if (t3 == 3) {
            break;
        }
        operation_8c104c60();
    }
    g_8c4df894 += v4;
    if ((&frame)->f28 == 0) {
        call_8c34d4e8((void *)((&frame)->f20));
    }
    if ((&frame)->f24 == 0) {
        operation_8c03ed70((int)((void *)0x8c323ed4));
    }
    return (int)(t1);
}
