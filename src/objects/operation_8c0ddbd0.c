typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
extern void call_8c225840(void);
extern int call_8c0ddfd4(void *, int, int, int);
extern void call_8c0df7d8(int, int, int);
int operation_8c0ddbd0(int a0, int a1, int a2)
{
    int t1;
    if (*(int *)0x8c46fe20 == 0) {
        return 0;
    }
    if (((a2 & 0x40)) != 0) {
        call_8c225840();
    }
    t1 = call_8c0ddfd4(*(S_g8c46fe20 **)0x8c46fe20, a0, a2, a1);
    if (t1 == 0) {
        return 0;
    }
    call_8c0df7d8(t1, a1, a2);
    return t1;
}
