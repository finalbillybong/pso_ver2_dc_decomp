typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c1bf55c(int, int);
int operation_8c1bf71c(int a0)
{
    int t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x12c);
    if (t1 != 0) {
        call_8c1bf55c(t1, a0);
    }
    return (int)(t1);
}
