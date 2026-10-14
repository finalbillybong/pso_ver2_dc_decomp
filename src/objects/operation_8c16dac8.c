typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db520 S_g8c4db520;
struct S_g8c4db520 {
    char unknown0[0x4];
    short f04;
};
extern void call_8c110398(int, int, int);
void operation_8c16dac8(int a0, int a1)
{
    if (*(int *)0x8c4db520 != 0) {
        (*(S_g8c4db520 **)0x8c4db520)->f04 |= 4;
    }
    call_8c110398(a0, 1, a1);
    if (*(int *)0x8c4db520 != 0) {
        (*(S_g8c4db520 **)0x8c4db520)->f04 &= -5;
    }
}
