typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c228e68(int, int);
int operation_8c228e2c(int a0)
{
    int t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x100);
    if (t1 != 0) {
        call_8c228e68(t1, a0);
    }
    return t1;
}
