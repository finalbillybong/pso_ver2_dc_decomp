typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_4c S_g8c46fe20_4c;
struct S_g8c46fe20 {
    char unknown0[0x4c];
    S_g8c46fe20_4c *f4c;
};
extern void call_8c21dedc(void *, int);
void operation_8c0de330(int a0)
{
    if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f4c != 0) {
        call_8c21dedc((*(S_g8c46fe20 **)0x8c46fe20)->f4c, a0);
    }
}
