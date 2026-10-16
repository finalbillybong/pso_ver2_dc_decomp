typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv13 S_vv13;
struct S_vv13 {
    char unknown0[0xc];
    short f0c;
};
extern char g_8c301fdc[];
extern int call_8c0329d8(int);
extern void call_8c09dc30(void *, void *, int);
extern void operation_8c03ef80(void *, ...);
void operation_8c09d9f4(void)
{
    int v16;
    int v4;
    int v3;
    int v5;
    int t1;
    short v2;
    int v12;
    int v14;
    int v6;
    int v11;
    S_vv13 *v13;
    int v1;
    v1 = (int)*(int *)0x8c44be04;
    v2 = (short)-1;
    if (((*(short *)((char *)0x8c46ece8 + (v1 << 1)) & 2)) == 0) {
        if (v1 > 0x11) {
            v11 = (int)0;
        } else {
            v3 = (int)0;
            v4 = (int)0;
            while (v1 > v4) {
                v5 = (int)(v3 + *(int *)((char *)0x8c46ec58 + (v4 << 2)));
                v3 = (int)v5;
                v4 = (int)(v4 + 1);
            }
            v6 = (int)(*(int *)0x8c46ec50 + v3 * 0x44);
            v11 = (int)v6;
        }
        v12 = (int)*(int *)((char *)0x8c46ec58 + (v1 << 2));
        v13 = (S_vv13 *)v11;
        v14 = (int)0;
        while (v12 > v14) {
            if (v2 != v13->f0c) {
                t1 = call_8c0329d8((int)(v13->f0c));
                v2 = (short)v13->f0c;
                v16 = (int)t1;
            }
            if (v16 != 0) {
                call_8c09dc30((void *)((int)v13 + 0x10), (void *)((int)v13 + 0x1c), v16);
            } else {
                operation_8c03ef80((void *)((g_8c301fdc + 0x19)), v13->f0c);
            }
            v14 = (int)(v14 + 1);
            v13 = (S_vv13 *)((char *)v13 + 68);
        }
        *(short *)((char *)0x8c46ece8 + (v1 << 1)) |= 2;
    }
}
