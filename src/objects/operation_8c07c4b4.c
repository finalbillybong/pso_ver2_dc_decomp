typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int count_below_20_8c07c524(void);
extern int call_8c065330(void);
extern int allocate_block(void *, unsigned int);
extern void call_8c07c534(int, int, int, int);
int operation_8c07c4b4(int a0, int a1)
{
    int t1;
    int t2;
    int t3;
    t1 = count_below_20_8c07c524();
    if (t1 == 0) {
        return 0;
    }
    t2 = call_8c065330();
    if (t2 == 0) {
        return 0;
    }
    t3 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x104);
    if (t3 != 0) {
        call_8c07c534(t3, a0, t2, a1);
    }
    return t3;
}
