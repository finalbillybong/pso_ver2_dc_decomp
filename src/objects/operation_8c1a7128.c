typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c02c320(int);
int operation_8c1a7128(int a0)
{
    int t1;
    t1 = call_8c02c320(a0);
    return (char)t1 * 0x24 + 0x8c287ea8;
}
