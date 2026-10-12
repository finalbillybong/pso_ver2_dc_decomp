typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_g8c4db9e4_11dc S_g8c4db9e4_11dc;
struct S_g8c4db9e4 {
    char unknown0[0x11dc];
    S_g8c4db9e4_11dc *f11dc;
};
extern int call_8c2383dc(void *);
int operation_8c247cf0(void)
{
    int t1;
    if (*(int *)0x8c4db9e4 == 0) {
        return 0;
    }
    t1 = call_8c2383dc((*(S_g8c4db9e4 **)0x8c4db9e4)->f11dc);
    return t1;
}
