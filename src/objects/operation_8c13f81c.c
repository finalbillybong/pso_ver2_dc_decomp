typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void operation_8c13f874(void *, int, int, int, int);
int operation_8c13f81c(int a0, int a1, int a2, int a3)
{
    int t1;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x1d8);
    if (t1 != 0) {
        operation_8c13f874((void *)t1, a0, a1, a2, a3);
    }
    return (int)(t1);
}
