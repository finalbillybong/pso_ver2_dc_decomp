typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void operation_8c0f33fc(void *, int, int);
void operation_8c059b5c(void)
{
    int t1;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xe8);
    if (t1 != 0) {
        operation_8c0f33fc((void *)t1, 0, 0);
    }
    *(int *)0x8c467980 = (int)(t1);
}
