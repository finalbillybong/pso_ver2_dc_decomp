typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int replicate_nibble_8c01d8c4(int, int);
extern void call_8c01d7bc(int, int, int, int);
void operation_8c01d858(int a0, int a1, int a2, int a3)
{
    int t1;
    t1 = replicate_nibble_8c01d8c4(a0, a1);
    call_8c01d7bc(a0, t1, a2, a3);
}
