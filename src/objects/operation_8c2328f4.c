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
    char unknown0[0x8];
    int f08;
};
extern S_g8c510900 *g_8c510900;
extern char g_8c338c82[];
extern void call_8c12b880(void *, int, int);
extern char operation_8c23280c(char);
extern void call_8c12b00c(void *, void *, ...);
int operation_8c2328f4(int a0, Arg1 *a1)
{
    Frame frame;
    int v1;
    int v5;
    int c;
    if (g_8c510900 != 0) {
        call_8c12b880((void *)(&(&frame)->f04), 0, 0x10);
        v1 = 0;
        while (8 > v1) {
            c = operation_8c23280c(*(char *)((char *)a1 + v1));
            if (c != 0) {
                *(char *)((char *)&(&frame)->f04 + v1) = c;
            } else {
                v5 = 0;
                goto L_8c232954;
            }
            v1++;
        }
        call_8c12b00c((void *)(&(&frame)->f04), (void *)((g_8c338c82 + 0xa)), (&frame));
        v5 = (int)(&frame)->f00;
L_8c232954:;
        return ((int (*)(int, int))(g_8c510900->f08))(a0, v5);
    }
    return 0;
}
