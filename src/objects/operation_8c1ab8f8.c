typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1abf30 S_c8c1abf30;
struct S_c8c1abf30 {
    char unknown0[0x64];
    short f64;
};
extern S_c8c1abf30 *operation_1abf30(void *, void *, void *);
extern void call_8c1ac06c(S_c8c1abf30 *, int, int);
S_c8c1abf30 *operation_8c1ab8f8(int a0, int a1, int a2)
{
    S_c8c1abf30 *t1;
    t1 = operation_1abf30((void *)a0, (void *)a1, (void *)a2);
    if (t1 != 0) {
        t1->f64 = 4;
        call_8c1ac06c(t1, 0x9f, 0);
    }
    return t1;
}
