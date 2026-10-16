typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ed60 S_g8c46ed60;
typedef struct S_vv1_0 S_vv1_0;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_8 S_vv5_8;
struct Frame {
    char unknown0[0x20];
};
struct S_vv5 {
    char unknown0[0x8];
    S_vv5_8 *f08;
};
extern char g_8c301fdc[];
extern void call_8c03ef04(Frame *, void *, void *);
extern int call_8c104d50(Frame *);
extern int call_8c18e808(int, int);
extern int call_8c18de4c(int);
extern void operation_8c104d00(int, int);
int operation_8c09d574(int a0, int a1, int a2)
{
    Frame frame;
    S_vv5 *v5;
    int v2;
    int v1;
    int t1;
    int t2;
    int t3;
    v1 = (int)*(int *)((char *)((char *)*(S_g8c46ed60 **)0x8c46ed60 + 0x0) + (a0 << 3));
    if (v1 != 0) {
        v2 = (int)-1;
        if (!(a1 > (*(int *)((char *)((char *)*(S_g8c46ed60 **)0x8c46ed60 + 0x4) + (a0 << 3)) + v2))) {
            goto L_8c09d598;
        }
    }
    return 0;
L_8c09d598:;
    v5 = (S_vv5 *)*(S_vv1_0 **)((char *)((char *)v1 + 0x0) + (a1 << 3));
    if (v5 == 0 || a2 > (*(int *)((char *)((char *)v1 + 0x4) + (a1 << 3)) + -1)) {
        return 0;
    }
    if (*(int *)0x8c44be20 != 0 || *(int *)0x8c4703c0 == 3) {
        call_8c03ef04((Frame *)((&frame)), (void *)(v5->f08), (void *)((void *)g_8c301fdc));
        goto L_8c09d5dc;
    }
    call_8c03ef04((Frame *)((&frame)), (void *)(v5->f08), (void *)((g_8c301fdc + 0x7)));
L_8c09d5dc:;
    t1 = call_8c104d50((Frame *)((&frame)));
    if (!(t1 >= 0)) {
        return 0;
    }
    t2 = call_8c18e808(t1, 0x44);
    *(int *)0x8c46ed44 = (int)(t2);
    t3 = call_8c18de4c((int)(t2 * 0x44));
    *(int *)0x8c46ed40 = (int)(t3);
    if (t3 == 0) {
        return 0;
    }
    operation_8c104d00((int)(&frame), t3);
    return 1;
}
