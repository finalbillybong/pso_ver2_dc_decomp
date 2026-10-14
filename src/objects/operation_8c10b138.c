typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void operation_8c15babc(void *, int, int);
int operation_8c10b138(int a0)
{
    int t1;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x4c);
    if (t1 != 0) {
        operation_8c15babc((void *)t1, (int)(*(S_g8c44be98 **)0x8c44be98), a0);
    }
    return (int)(t1);
}
