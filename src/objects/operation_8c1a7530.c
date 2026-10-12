typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c026634(void *);
int operation_8c1a7530(int a0)
{
    int t1;
    t1 = operation_8c026634((void *)a0);
    return *(int *)((char *)0x8c323df0 + (t1 << 2));
}
