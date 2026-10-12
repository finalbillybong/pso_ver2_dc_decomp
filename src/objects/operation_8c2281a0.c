typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c2281f8(int, int, int, int, int);
int operation_8c2281a0(int a0, int a1, int a2, int a3)
{
    int t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xc8);
    if (t1 != 0) {
        call_8c2281f8(t1, a0, a1, a2, a3);
    }
    return t1;
}
