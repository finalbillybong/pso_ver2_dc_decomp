typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c22bef8(int, int);
int operation_8c22bec0(int a0)
{
    int t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x44);
    if (t1 != 0) {
        call_8c22bef8(t1, a0);
    }
    return t1;
}
