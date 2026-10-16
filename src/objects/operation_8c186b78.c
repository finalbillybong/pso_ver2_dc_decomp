typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ed60 S_g8c46ed60;
typedef struct S_g8c4dbbec S_g8c4dbbec;
typedef struct S_vv1_0 S_vv1_0;
typedef struct S_vv1_0_4 S_vv1_0_4;
struct Frame {
    char unknown0[0x20];
};
extern char g_8c319ad4[];
extern void call_8c03ef04(Frame *, void *, void *);
extern int call_8c104d50(Frame *);
extern int allocate_block(void *, unsigned int);
extern void operation_8c104d00(int, int);
int operation_8c186b78(int a0, int a1, int a2)
{
    Frame frame;
    int v1;
    int v2;
    int t1;
    int t2;
    v1 = (int)*(int *)((char *)((char *)*(S_g8c46ed60 **)0x8c46ed60 + 0x0) + (a0 << 3));
    if (v1 != 0) {
        v2 = (int)-1;
        if (!(a1 > (*(int *)((char *)((char *)*(S_g8c46ed60 **)0x8c46ed60 + 0x4) + (a0 << 3)) + v2))) {
            goto L_8c186ba4;
        }
    }
    return 0;
L_8c186ba4:;
    if (*(int *)((char *)((char *)v1 + 0x0) + (a1 << 3)) == 0 || a2 > (*(int *)((char *)((char *)v1 + 0x4) + (a1 << 3)) + -1)) {
        return 0;
    }
    call_8c03ef04((Frame *)((&frame)), (void *)(*(S_vv1_0_4 **)((char *)((char *)*(S_vv1_0 **)((char *)((char *)v1 + 0x0) + (a1 << 3)) + 0x4) + (a2 * 0xc))), (void *)((g_8c319ad4 + 0x15)));
    t1 = call_8c104d50((Frame *)((&frame)));
    if (t1 > 0) {
        t2 = allocate_block((void *)(*(S_g8c4dbbec **)0x8c4dbbec), (unsigned int)t1);
        if (t2 != 0) {
            operation_8c104d00((int)(&frame), t2);
            *(int *)((char *)0x8c4dbba0 + (a0 << 2)) = (int)(t2);
            return 1;
        }
    }
    return 0;
}
