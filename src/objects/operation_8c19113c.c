typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1196d4 S_c8c1196d4;
struct S_c8c1196d4 {
    char unknown0[0x64];
    int f64;
};
extern S_c8c1196d4 *call_8c1196d4(void *, void *, int);
extern void call_8c0dc610(int, float);
S_c8c1196d4 *operation_8c19113c(void)
{
    S_c8c1196d4 *t1;
    t1 = call_8c1196d4((void *)0x8c2876e8, (void *)0x8c2876f0, 1);
    call_8c0dc610((int)t1, 30.0f);
    t1->f64 = 0x186a0;
    return t1;
}
