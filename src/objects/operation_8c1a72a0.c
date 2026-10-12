typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_x39872 S_x39872;
struct S_x39872 {
    char unknown0[0x8];
    int f08;
};
extern int call_8c02c320(int);
extern int call_8c02c30c(int);
extern int call_8c1a72ec(int);
int operation_8c1a72a0(int a0)
{
    int t1;
    int t2;
    int t3;
    t1 = call_8c02c320(a0);
    t2 = call_8c02c30c(t1);
    t3 = call_8c1a72ec(0xc7);
    return (int)(((S_x39872 *)(*(int *)((char *)0x8c323ba4 + ((char)t2 << 2)) + t3 * 0xc))->f08);
}
