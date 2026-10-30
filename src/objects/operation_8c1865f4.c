typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv11 S_vv11;
struct Frame {
    char unknown0[0xc];
};
struct S_vv11 {
    char unknown0[0x4];
    short f04;
    short f06;
    char unknown8[0x2];
    short f0a;
};
extern int g_8c46ec54;
extern int g_8c4dbb8c;
extern int g_8c4dbb94;
extern void call_8c12b880(Frame *, int, int);
extern int call_8c09e920(int, S_vv11 *, int);
void operation_8c1865f4(int a0)
{
    Frame frame;
    int v2;
    int v1;
    int v3;
    int v10;
    int v12;
    int v4;
    int v9;
    int v13;
    S_vv11 *v11;
    int v14;
    short v15;
    int t1;
    if (a0 > 0x11) {
        v9 = (int)0;
    } else {
        v1 = (int)0;
        v2 = (int)0;
        while (a0 > v2) {
            v3 = (int)(v1 + *(int *)((char *)0x8c46eca0 + (v2 << 2)));
            v1 = (int)v3;
            v2 = (int)(v2 + 1);
        }
        v4 = (int)(g_8c46ec54 + v1 * 0x48);
        v9 = (int)v4;
    }
    v10 = (int)*(int *)((char *)0x8c46eca0 + (a0 << 2));
    call_8c12b880((Frame *)((&frame)), 0, 0xc);
    v11 = (S_vv11 *)v9;
    {
    int v16 = 0x1000;
    v12 = (int)0;
    while (v10 > v12) {
        v13 = (int)g_8c4dbb94;
        g_8c4dbb94 = v13 + 1;
        v11->f0a = v13 + v16;
        v14 = (int)g_8c4dbb8c;
        g_8c4dbb8c = v14 + 1;
        v11->f04 = v14;
        v15 = (short)v11->f06;
        if (v15 != 0) {
            g_8c4dbb8c += v15;
            g_8c4dbb94 += v11->f06;
        } else {
            t1 = call_8c09e920(a0, v11, 1);
            if (t1 != 0) {
                g_8c4dbb8c += t1;
                g_8c4dbb94 += t1;
                v11->f06 = t1;
            }
        }
        v12 = (int)(v12 + 1);
        v11 = (S_vv11 *)((char *)v11 + 72);
    }
    }
}
