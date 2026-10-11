typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Arg1 {
    char unknown0[0x7b0];
    int f7b0;
};
struct Arg2 {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x4];
    int f14;
};
void operation_8c0d9bb4(int a0, Arg1 *a1, Arg2 *a2)
{
    if (a1->f7b0 != 0) {
        a2->f0c = 0x14000;
        a2->f14 = 0x70000000;
        return;
    }
    a2->f0c = 0x10000;
    a2->f14 = 0x60000000;
}
