typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg2 Arg2;
struct Arg2 {
    char unknown0[0xc];
    int f0c;
    int f10;
    int f14;
    int f18;
};
void set_fields_8c0d9b90(int a0, int a1, Arg2 *a2)
{
    a2->f0c = 0x4000;
    a2->f14 = 0x10000000;
    a2->f10 = 0x60000;
    a2->f18 = -0x1ffff800;
}
