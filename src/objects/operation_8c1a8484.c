typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_20 S_frame_20;
typedef struct S_g8c4df894 S_g8c4df894;
struct Frame {
    char unknown0[0x20];
    S_frame_20 *f20;
    int f24;
    int f28;
};
extern void operation_8c1a7e14(void *, int, int);
extern void call_8c34d4e8(void *);
extern void operation_8c03ed70(int);
extern int call_8c18e768(int, int);
extern void call_8c34d6ae(void *, int, int);
extern int call_8c34da3c(void *);
extern void operation_8c104c60(void);
extern int call_8c18e8a0(int, int);
extern void call_8c3889a4(void *, void *, int);
int operation_8c1a8484(int a0, int a1)
{
    Frame frame;
    int t1;
    int t3;
    int t2;
    char *v1;
    int t4;
    operation_8c1a7e14((void *)(&frame), a0, 1);
    v1 = (char *)*(int *)0x8c4df8a0;
    if (!((int)(v1) > 0)) {
        if ((&frame)->f28 == 0) {
            call_8c34d4e8((void *)((&frame)->f20));
        }
        if ((&frame)->f24 == 0) {
            operation_8c03ed70((int)((void *)0x8c323ed4));
        }
        return -1;
    }
    t1 = call_8c18e768((int)(v1), 0x800);
    if (t1 > 0) {
        call_8c34d6ae((void *)((&frame)->f20), t1, a1);
        for (;;) {
            t2 = call_8c34da3c((void *)((&frame)->f20));
            if (t2 == 3) {
                break;
            }
            operation_8c104c60();
        }
        *(void **)0x8c4df894 = &*(int *)((char *)((char *)*(S_g8c4df894 **)0x8c4df894 + 0x0) + (t1 << 11));
    }
    t3 = call_8c18e8a0((int)(v1), 0x800);
    if (t3 > 0) {
        call_8c34d6ae((void *)((&frame)->f20), 1, (int)((void *)0x8c4df8c0));
        for (;;) {
            t4 = call_8c34da3c((void *)((&frame)->f20));
            if (t4 == 3) {
                break;
            }
            operation_8c104c60();
        }
        *(int *)0x8c4df894 += 0x800;
        call_8c3889a4((void *)(&*(int *)((char *)((char *)a1 + 0x0) + (t1 << 11))), (void *)((void *)0x8c4df8c0), t3);
    }
    if ((&frame)->f28 == 0) {
        call_8c34d4e8((void *)((&frame)->f20));
    }
    if ((&frame)->f24 == 0) {
        operation_8c03ed70((int)((void *)0x8c323ed4));
    }
    return (int)(v1);
}
