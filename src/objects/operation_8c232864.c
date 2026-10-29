typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c510900 S_g8c510900;
typedef struct Arg1 Arg1;
struct Frame {
    int f00;
    int f04;
    char unknown8[0xc];
};
struct S_g8c510900 {
    char unknown0[0x4];
    int f04;
};
extern S_g8c510900 *g_8c510900;
extern char g_8c338c82[];
extern void call_8c12b880(void *, int, int);
extern int operation_8c23280c(char);
extern void call_8c12b00c(void *, void *, ...);
int operation_8c232864(int a0, Arg1 *a1)
{
    Frame frame;
    int v1;
    int v5;
    int t1;
    int t2;
    if (g_8c510900 != 0) {
        call_8c12b880((void *)(&(&frame)->f04), 0, 0x10);
        v1 = (int)0;
        while (8 > v1) {
            t1 = (char)operation_8c23280c(*(char *)((char *)((char *)a1 + 0x0) + (v1)));
            if (t1 != 0) {
                *(char *)((char *)((char *)v1 + 0x0) + ((int)(&(&frame)->f04))) = (char)t1;
            } else {
                v5 = (int)0;
                goto L_8c2328c4;
            }
            v1 = (int)(v1 + 1);
        }
        call_8c12b00c((void *)(&(&frame)->f04), (void *)((g_8c338c82 + 0xa)), (&frame));
        v5 = (int)(&frame)->f00;
L_8c2328c4:;
        t2 = ((int (*)(int, int))(g_8c510900->f04))(a0, v5);
        return (int)(t2);
    }
    return 0;
}
