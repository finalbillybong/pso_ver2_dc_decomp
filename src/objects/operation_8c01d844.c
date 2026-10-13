typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c01d7bc(int, int);
void operation_8c01d844(int a0, int a1)
{
    call_8c01d7bc(a0, (int)(a1 & -0xf00001));
}
