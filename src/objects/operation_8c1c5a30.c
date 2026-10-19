typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void operation_8c1c5ab0(void *, int, int, int);
extern void operation_8c1ab01c(void *, int, int, int);
void operation_8c1c5a30(int a0, int a1, int a2, int a3)
{
    int t1;
    int t2;
    if ((unsigned short)a2 != 0xffff) {
        t1 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
        if (t1 != 0) {
            operation_8c1c5ab0((void *)t1, a0, a2, a3);
        }
        if (t1 != 0) {
            t2 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
            if (t2 != 0) {
                operation_8c1ab01c((void *)t2, t1, (int)((void *)0x8c1c5aa8), 0x1e);
            }
        }
    }
}
