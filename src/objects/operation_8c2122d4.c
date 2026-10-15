typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x38];
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
};
extern void operation_8c2123a8(int, int);
void operation_8c2122d4(int a0, Arg1 *a1)
{
    operation_8c2123a8(a0, (int)a1);
    a1->f48 = a1->f38 = *(float *)0x8c2e1638;
    a1->f4c = a1->f3c = *(float *)0x8c2e163c;
    a1->f50 = a1->f40 = *(float *)0x8c2e1640;
    a1->f54 = a1->f44 = *(float *)0x8c2e1644;
}
