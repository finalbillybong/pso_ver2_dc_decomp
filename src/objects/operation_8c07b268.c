typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int call_8c034c7c(int);
extern void call_8c25fab8(int);
extern int call_8c07b2d4(int);
extern int allocate_block(void *, unsigned int);
extern void call_8c07b41c(int, int);
int operation_8c07b268(int a0)
{
    int t1;
    int t2;
    int t3;
    t1 = call_8c034c7c(a0 + 0x7e4);
    if (t1 == 0xd) {
        call_8c25fab8(a0);
        return 0;
    }
    t2 = call_8c07b2d4(a0);
    if (t2 != 0) {
        t3 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x24);
        if (t3 != 0) {
            call_8c07b41c(t3, a0);
        }
        return t3;
    }
    return 0;
}
