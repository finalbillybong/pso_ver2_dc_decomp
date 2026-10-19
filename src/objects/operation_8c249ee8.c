typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c249f2c(int, int, void *);
int operation_8c249ee8(int a0)
{
    int t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x94);
    if (t1 != 0) {
        call_8c249f2c(t1, a0, g_8c44be98);
    }
    return (int)(t1);
}
