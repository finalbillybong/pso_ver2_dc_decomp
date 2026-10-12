typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern int call_8c1d1830(int, int);
extern void call_8c1a62a8(int, int, void *);
int operation_8c1d17e0(int a0, int a1)
{
    int t1;
    int t2;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x70);
    if (t1 != 0) {
        t2 = call_8c1d1830(a0, a1);
        call_8c1a62a8(t1, t2, (void *)0x8c289328);
    }
    return t1;
}
