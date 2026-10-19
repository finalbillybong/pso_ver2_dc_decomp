typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c44be94 *g_8c44be94;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c0c7958(int, void *, int, int, int, int, int);
int operation_8c0c78f4(int a0, int a1, int a2, int a3)
{
    int t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x42c);
    if (t1 != 0) {
        call_8c0c7958(t1, g_8c44be94, a0, a1, 1, a2, a3);
    }
    return (int)(t1);
}
