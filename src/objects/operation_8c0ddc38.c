typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
extern int call_8c0de07c(void *, int);
extern void call_8c0df924(int, int, int);
int operation_8c0ddc38(int a0, int a1, int a2)
{
    int t1;
    if (*(int *)0x8c46fe20 == 0) {
        return 0;
    }
    t1 = call_8c0de07c(*(S_g8c46fe20 **)0x8c46fe20, a0);
    if (t1 == 0) {
        return 0;
    }
    call_8c0df924(t1, a1, a2);
    return t1;
}
