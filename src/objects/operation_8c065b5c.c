typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c44be94 *g_8c44be94;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c177748(int);
extern int allocate_block(void *, unsigned int);
extern void call_8c065c24(int, void *, int);
int operation_8c065b5c(int a0)
{
    int t1;
    operation_8c177748(0x16);
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x880);
    if (t1 != 0) {
        call_8c065c24(t1, g_8c44be94, a0);
    }
    return (int)(t1);
}
