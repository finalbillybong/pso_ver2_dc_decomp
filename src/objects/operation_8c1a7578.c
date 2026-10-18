typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c026554(void *);
extern int operation_02c350(void *);
int operation_8c1a7578(int a0)
{
    int t1;
    int t2;
    t1 = operation_8c026554((void *)a0);
    t2 = operation_02c350((void *)a0);
    return *(int *)((char *)0x8c323e08 + (t1 << 2)) + (short)t2 * 0x14;
}
