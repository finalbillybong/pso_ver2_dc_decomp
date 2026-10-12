typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2ba4 S_g8c4e2ba4;
typedef struct S_g8c4e2ba4_14 S_g8c4e2ba4_14;
struct S_g8c4e2ba4 {
    char unknown0[0x14];
    S_g8c4e2ba4_14 *f14;
};
extern int call_8c0dc510(int, int, int, void *);
int operation_8c0dc92c(int a0, int a1, int a2)
{
    int t1;
    if (*(int *)0x8c4e2ba4 == 0) {
        return 0;
    }
    t1 = call_8c0dc510(a0, a1, a2, (*(S_g8c4e2ba4 **)0x8c4e2ba4)->f14);
    return t1;
}
