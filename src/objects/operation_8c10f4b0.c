typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct Arg3 Arg3;
typedef struct Arg4 Arg4;
struct Arg3 {
    Vector3 f00;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_c8c011214_4 {
    Vector3 f00;
    Vector3 f0c;
};
struct Arg4 {
    Vector3 f00;
};
extern S_c8c011214 *call_8c011214(int, int, int);
int operation_8c10f4b0(int a0, int a1, int a2, Arg3 *a3, Arg4 *a4)
{
    S_c8c011214 *t1;
    t1 = call_8c011214(a1, a2, 0x2100);
    if (t1 != 0) {
        a3->f00 = t1->f04->f00;
        a4->f00 = t1->f04->f0c;
        return 1;
    }
    return 0;
}
