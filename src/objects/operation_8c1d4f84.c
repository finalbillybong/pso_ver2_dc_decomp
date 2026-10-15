typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg1_s7e4 Arg1_s7e4;
struct Arg1_s7e4 {
    char unknown0[0x34];
    int f34;
};
int operation_8c1d4f84(int a0, Arg1 *a1)
{
    if (((int)a1 + 0x7e4) == 0) {
        return 0x2d;
    }
    if (((((Arg1_s7e4 *)((char *)a1 + 0x7e4))->f34 & 0x20)) != 0) {
        return 0;
    }
    return (((((Arg1_s7e4 *)((char *)a1 + 0x7e4))->f34 & 0x40)) != 0) ? 1 : 2;
}
