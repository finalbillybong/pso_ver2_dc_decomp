typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c227b94(int, int, int, float);
int operation_8c227b34(int a0, int a1, float f0)
{
    int t1;
    if (*(int *)0x8c506160 != 0) {
        t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x2c);
        if (t1 != 0) {
            call_8c227b94(t1, a0, *(int *)0x8c506160 + a1 * 0xc, f0);
        }
        return t1;
    }
    return 0;
}
