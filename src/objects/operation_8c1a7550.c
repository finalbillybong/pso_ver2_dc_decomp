typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c323dfc S_g8c323dfc;
extern int operation_8c026634(void *);
int operation_8c1a7550(int a0, int a1)
{
    int t1;
    t1 = operation_8c026634((void *)a0);
    return (int)(&*(int *)((char *)((char *)*(S_g8c323dfc **)((char *)0x8c323dfc + (t1 << 2)) + 0x0) + (a1 << 2)));
}
