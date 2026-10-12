typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int call_8c260808(void);
extern int allocate_block(void *, unsigned int);
extern void call_8c26080c(int, int);
int operation_8c2607b8(int a0)
{
    int t1;
    int t2;
    t1 = call_8c260808();
    if (t1 == 0) {
        return 0;
    }
    t2 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xc4);
    if (t2 != 0) {
        call_8c26080c(t2, a0);
    }
    return t2;
}
