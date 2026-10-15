typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct S_x15744 S_x15744;
struct S_x15744 {
    Vector3 f00;
};
struct Arg1 {
    Vector3 f00;
};
void operation_8c2475cc(int a0, Arg1 *a1)
{
    if (a0 < 0 || a0 >= 4) {
        return;
    }
    *(Vector3 *)&((S_x15744 *)(a0 * 0xc + 0x8c510e88))->f00 = *(Vector3 *)&a1->f00;
}
