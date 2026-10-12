typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_70 S_g8c46fe20_70;
struct S_g8c46fe20 {
    char unknown0[0x70];
    S_g8c46fe20_70 *f70;
};
extern void call_8c119764(void *, int, int);
void operation_8c0ddb68(int a0, int a1)
{
    if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f70 != 0) {
        call_8c119764((*(S_g8c46fe20 **)0x8c46fe20)->f70, a0, a1 | 0xe);
    }
}
