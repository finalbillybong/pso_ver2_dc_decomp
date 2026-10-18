typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Arg1 {
    char unknown0[0x3];
    unsigned char f03;
};
struct Arg2 {
    Arg1 *f00;
};
extern void call_8c04b5c8(int, Arg1 *);
int operation_8c04b588(int a0, Arg1 *a1, Arg2 *a2)
{
    unsigned char v1;
    v1 = (unsigned char)*(unsigned char *)0x8c467134;
    if (a1->f03 == v1) {
        return 0;
    }
    if (a1->f03 != (unsigned char)(v1 + -1)) {
        call_8c04b5c8(a0, a1);
        return 1;
    }
    if (a2->f00 == 0) {
        a2->f00 = a1;
    }
    return 0;
}
