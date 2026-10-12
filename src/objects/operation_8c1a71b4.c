typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c02c320(int);
int operation_8c1a71b4(int a0)
{
    int t1;
    t1 = call_8c02c320(a0);
    return (int)(&*(int *)((char *)0x8c2881b0 + ((char)t1 << 5)));
}
