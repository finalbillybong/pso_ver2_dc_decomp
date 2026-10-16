typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c156c24 S_c8c156c24;
struct S_c8c156c24 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x60];
    int f98;
};
extern S_c8c156c24 *operation_8c156c24(int, int);
extern int call_8c011ecc(int);
extern void operation_8c199b20(int, int);
S_c8c156c24 *operation_8c156bd8(int a0, int a1, int a2)
{
    S_c8c156c24 *t2;
    int t1;
    t2 = operation_8c156c24(a0, a1);
    t1 = call_8c011ecc(0x24);
    if (t1 != 0) {
        operation_8c199b20(t1, a2);
    }
    t2->f98 = (int)(t1);
    t2->f34 |= 0x40;
    return t2;
}
