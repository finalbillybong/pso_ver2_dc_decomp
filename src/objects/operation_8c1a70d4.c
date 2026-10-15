typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c026634(void *);
float operation_8c1a70d4(int a0)
{
    int t1;
    t1 = operation_8c026634((void *)a0);
    return *(float *)((char *)0x8c287e90 + (t1 << 3));
}
