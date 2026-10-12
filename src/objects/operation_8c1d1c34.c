typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c2247bc(int, void *, int, int);
int operation_8c1d1c34(int a0)
{
    int t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xa0);
    if (t1 != 0) {
        call_8c2247bc(t1, (void *)0x8c289340, a0 + 0x28, a0 + 0x2c);
    }
    return t1;
}
