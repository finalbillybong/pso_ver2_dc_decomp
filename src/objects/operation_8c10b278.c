typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c10b2b4(int, int);
int operation_8c10b278(int a0)
{
    int t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x9c);
    if (t1 != 0) {
        call_8c10b2b4(t1, a0);
    }
    return (int)(t1);
}
