typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void operation_8c24d270(void *, int, void *);
void operation_8c24d230(int a0, int a1)
{
    int t1;
    if (a0 != 0 && a1 != 0) {
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x24);
        if (t1 != 0) {
            operation_8c24d270((void *)t1, a0, (void *)a1);
        }
    }
}
