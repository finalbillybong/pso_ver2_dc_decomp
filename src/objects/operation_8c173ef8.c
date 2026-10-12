typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db520 S_g8c4db520;
extern int allocate_block(void *, unsigned int);
extern void operation_8c173b48(void *, void *, int);
extern void reparent_hierarchy_node(void *, void *);
int operation_8c173ef8(int a0)
{
    int t1;
    if (*(int *)0x8c4db520 != 0) {
        t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xa8);
        if (t1 == 0) {
            for (;;) {
            }
        }
        if (t1 != 0) {
            operation_8c173b48((void *)t1, *(S_g8c4db520 **)0x8c4db520, a0);
        }
        reparent_hierarchy_node((void *)t1, *(S_g8c44be84 **)0x8c44be84);
        return t1;
    }
    return 0;
}
