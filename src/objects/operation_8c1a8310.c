typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_20 S_frame_20;
typedef struct S_frame_28 S_frame_28;
struct Frame {
    char unknown0[0x20];
    S_frame_20 *f20;
    int f24;
    S_frame_28 *f28;
};
struct S_frame_28 {
    char unknown0[0x28];
    int f28;
};
extern void *g_8c4df894;
extern int g_8c4df8a0;
extern char g_8c323ed4[];
extern void operation_8c1a7e14(void *, int, int);
extern void call_8c34d4e8(void *);
extern void operation_8c03ed70(int);
extern int call_8c18e768(int, int);
extern int call_8c011e9c(int);
extern void operation_8c03ef80(void *, ...);
extern void call_8c34d6ae(void *, int, int);
extern int call_8c34da3c(void *);
extern void operation_8c104c60(void);
extern void call_8c0787cc(int, int);
extern void call_8c011ec0(int);
int operation_8c1a8310(int a0, int a1)
{
    Frame frame;
    int t3;
    char *v16;
    char *v6;
    int t1;
    int t2;
    int v9;
    int t4;
    int t5;
    operation_8c1a7e14((void *)(&frame), a0, 1);
    v6 = (char *)g_8c4df8a0;
    if (!((int)(v6) > 0)) {
        if ((&frame)->f28 == 0) {
            call_8c34d4e8((void *)((&frame)->f20));
        }
        if ((&frame)->f24 == 0) {
            operation_8c03ed70((int)((void *)g_8c323ed4));
        }
        return -1;
    }
    t3 = call_8c18e768((int)(v6 + 0x7ff), 0x800);
    if ((&frame)->f28 != 0) {
        v16 = (char *)(&frame)->f28->f28;
        if (v16 != 0) {
            t1 = call_8c18e768((int)(v16 + 0x7ff), 0x800);
            t2 = call_8c011e9c((int)(t1 << 0xb));
            if (t2 == 0) {
                operation_8c03ef80((void *)((g_8c323ed4 + 0xd)));
            }
            call_8c34d6ae((void *)((&frame)->f20), t3, t2);
            for (;;) {
                t4 = call_8c34da3c((void *)((&frame)->f20));
                if (t4 == 3) {
                    break;
                }
                operation_8c104c60();
            }
            g_8c4df894 = &*(int *)((char *)((char *)g_8c4df894 + 0x0) + (t3 << 11));
            call_8c0787cc(t2, a1);
            call_8c011ec0(t2);
            v9 = (int)(&frame)->f28->f28;
            if ((&frame)->f28 == 0) {
                call_8c34d4e8((void *)((&frame)->f20));
            }
            if ((&frame)->f24 == 0) {
                operation_8c03ed70((int)((void *)g_8c323ed4));
            }
            return (int)(v9);
        }
    }
    call_8c34d6ae((void *)((&frame)->f20), t3, a1);
    for (;;) {
        t5 = call_8c34da3c((void *)((&frame)->f20));
        if (t5 == 3) {
            break;
        }
        operation_8c104c60();
    }
    g_8c4df894 = &*(int *)((char *)((char *)g_8c4df894 + 0x0) + (t3 << 11));
    if ((&frame)->f28 == 0) {
        call_8c34d4e8((void *)((&frame)->f20));
    }
    if ((&frame)->f24 == 0) {
        operation_8c03ed70((int)((void *)g_8c323ed4));
    }
    return (int)(v6);
}
