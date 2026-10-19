typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4689e0 *g_8c4689e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void operation_8c24d3b0(void *, int, int);
int operation_8c24d364(int a0)
{
    int t1;
    if (a0 != 0) {
        t1 = allocate_block(g_8c4d97e0, (unsigned int)0x148);
        if (t1 != 0) {
            operation_8c24d3b0((void *)t1, (int)g_8c4689e0, a0);
        }
        return (int)(t1);
    }
    return 0;
}
