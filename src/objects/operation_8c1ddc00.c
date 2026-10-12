typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c1ddcb8(int, int, int, int);
extern void call_8c1ab01c(int, int, void *, int);
void operation_8c1ddc00(int a0, int a1, int a2)
{
    int t1;
    int t2;
    int t3;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x28);
    if (t1 != 0) {
        call_8c1ddcb8(t1, a0, a1, a2);
    }
    if (t1 != 0) {
        t2 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x2c);
        if (t2 != 0) {
            call_8c1ab01c(t2, t1, (void *)0x8c1ddc9c, 0xa);
        }
    }
    if (t1 != 0) {
        t3 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x2c);
        if (t3 != 0) {
            call_8c1ab01c(t3, t1, (void *)0x8c1ddc8c, 0x14);
        }
    }
}
