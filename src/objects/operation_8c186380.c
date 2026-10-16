typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ed60 S_g8c46ed60;
typedef struct S_g8c4dbb98 S_g8c4dbb98;
typedef struct S_vv1_0 S_vv1_0;
struct Frame {
    char unknown0[0x20];
};
extern char g_8c319a80[];
extern void operation_8c03ef80(void *, ...);
extern int operation_8c01c25c(void);
extern void call_8c03ef04(Frame *, int, void *);
extern int operation_8c104d00(int, void *);
extern int call_8c18e808(int, int);
extern int call_8c14f8c4(void);
extern void call_8c3889a4(int, int, int);
int operation_8c186380(int a0, int a1, int a2)
{
    Frame frame;
    int v1;
    int v2;
    int v7;
    int t3;
    int v14;
    int t2;
    char *v12;
    int v8;
    int t1;
    int v13;
    int v15;
    int t4;
    v1 = (int)*(int *)((char *)((char *)*(S_g8c46ed60 **)0x8c46ed60 + 0x0) + (a0 << 3));
    if (v1 != 0) {
        v2 = (int)-1;
        if (!(a1 > (*(int *)((char *)((char *)*(S_g8c46ed60 **)0x8c46ed60 + 0x4) + (a0 << 3)) + v2))) {
            goto L_8c1863be;
        }
    }
    operation_8c03ef80((void *)((g_8c319a80 + 0x4)));
    return 0;
L_8c1863be:;
    if (*(int *)((char *)((char *)v1 + 0x0) + (a1 << 3)) == 0 || a2 > (*(int *)((char *)((char *)v1 + 0x4) + (a1 << 3)) + -1)) {
        operation_8c03ef80((void *)((g_8c319a80 + 0x4)));
        return 0;
    }
    v7 = (int)*(int *)((char *)((char *)*(S_vv1_0 **)((char *)((char *)v1 + 0x0) + (a1 << 3)) + 0x4) + (a2 * 0xc));
    t1 = operation_8c01c25c();
    if (t1 == 0x10 && a0 == 0) {
        v8 = (int)(*(int *)0x8c510ba0 != 0);
        if (v8 != 0) {
            call_8c03ef04((Frame *)((&frame)), v7, (void *)((g_8c319a80 + 0x29)));
            goto L_8c186450;
        }
        if (*(int *)0x8c41cd20 != 0) {
            call_8c03ef04((Frame *)((&frame)), v7, (void *)((g_8c319a80 + 0x32)));
            goto L_8c186450;
        }
        call_8c03ef04((Frame *)((&frame)), v7, (void *)((g_8c319a80 + 0x3a)));
        goto L_8c186450;
    }
    call_8c03ef04((Frame *)((&frame)), v7, (void *)((g_8c319a80 + 0x3a)));
L_8c186450:;
    t2 = operation_8c104d00((int)(&frame), (void *)(*(S_g8c4dbb98 **)0x8c4dbb98));
    if (!(t2 >= 0)) {
        return 0;
    }
    if (t2 > *(int *)0x8c4dbb9c) {
        return 0;
    }
    v12 = (char *)*(int *)0x8c4dbb98;
    v13 = (int)0;
    v14 = (int)0;
    while (0x12 > v14) {
        v15 = (int)(v13 + *(int *)((char *)0x8c46eca0 + (v14 << 2)));
        v13 = (int)v15;
        v14 = (int)(v14 + 1);
    }
    t3 = call_8c18e808(t2, 0x48);
    if (!((unsigned int)(v13 + t3) > (unsigned int)0x5a8)) {
        t4 = call_8c14f8c4();
        call_8c3889a4((int)(*(int *)0x8c46ec54 + t4 * 0x48), (int)(v12), t2);
        *(int *)((char *)0x8c46eca0 + (a0 << 2)) = (int)(t3);
    }
    return 1;
}
