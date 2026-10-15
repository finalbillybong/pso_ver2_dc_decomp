typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char unknown0[0xc];
    short f0c;
};
extern char g_8c301fdc[];
extern int call_8c0329d8(int);
extern void call_8c09dc30(void *, void *, int);
extern void operation_8c03ef80(void *, ...);
void operation_8c09dad4(int a0, int a1)
{
    int v12;
    short v1;
    S_vv2 *v2;
    int v3;
    int t1;
    v1 = (short)-1;
    v2 = (S_vv2 *)a0;
    v3 = (int)0;
    while (a1 > v3) {
        if (v1 != v2->f0c) {
            t1 = call_8c0329d8((int)(v2->f0c));
            v1 = (short)v2->f0c;
            v12 = (int)t1;
        }
        if (v12 != 0) {
            call_8c09dc30((void *)((int)v2 + 0x10), (void *)((int)v2 + 0x1c), v12);
        } else {
            operation_8c03ef80((void *)((g_8c301fdc + 0x19)), v2->f0c);
        }
        v3 = (int)(v3 + 1);
        v2 = (S_vv2 *)((char *)v2 + 68);
    }
}
