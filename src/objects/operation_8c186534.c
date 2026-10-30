typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv11 S_vv11;
struct Frame {
    char unknown0[0x4];
};
struct S_vv11 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2];
    short f08;
};
extern int g_8c46ec50;
extern int g_8c4dbb88;
extern int g_8c4dbb90;
extern void call_8c12b880(Frame *, int, int);
extern int call_8c09e920(int, S_vv11 *, int);
void operation_8c186534(int a0)
{
    Frame frame;
    int v2;
    int v1;
    int v3;
    int v10;
    int v12;
    int v4;
    int v13;
    S_vv11 *v11;
    int v14;
    int t1;
    if (a0 > 0x11) {
        v11 = 0;
    } else {
        v1 = (int)0;
        v2 = (int)0;
        while (a0 > v2) {
            v3 = (int)(v1 + *(int *)((char *)0x8c46ec58 + (v2 << 2)));
            v1 = (int)v3;
            v2 = (int)(v2 + 1);
        }
        v11 = (S_vv11 *)(g_8c46ec50 + v1 * 0x44);
    }
    v10 = (int)*(int *)((char *)0x8c46ec58 + (a0 << 2));
    call_8c12b880((Frame *)((&frame)), 0, 4);
    v14 = 0x4000;
    v12 = (int)0;
    while (v10 > v12) {
        v13 = (int)g_8c4dbb90;
        g_8c4dbb90 = v13 + 1;
        v11->f08 = v13 + v14;
        v11->f04 = g_8c4dbb88++;
        t1 = call_8c09e920(a0, v11, 0);
        if (t1 != 0) {
            g_8c4dbb88 += t1;
            g_8c4dbb90 += t1;
        }
        v12 = (int)(v12 + 1);
        v11 = (S_vv11 *)((char *)v11 + 68);
    }
}
