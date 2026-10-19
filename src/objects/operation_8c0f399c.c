typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c0f39dc(int, int, int);
int operation_8c0f399c(int a0)
{
    int t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x154);
    if (t1 != 0) {
        call_8c0f39dc(t1, a0, a0);
    }
    return (int)(t1);
}
