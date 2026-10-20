typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x3b0];
    int f3b0;
};
struct Arg1 {
    char unknown0[0x1b3];
    char f1b3;
    char unknown1b4[0x1b];
    char f1cf;
    char unknown1d0[0x1b];
    char f1eb;
    char unknown1ec[0x1b];
    char f207;
};
void operation_8c021100(Object *o, Arg1 *a1)
{
    int v;
    int c;
    v = 0;
    c = a1->f1b3;
    v |= (unsigned char)c;
    v |= a1->f1cf << 8 & 0xff00;
    v |= a1->f1eb << 0x10 & 0xff0000;
    v |= a1->f207 << 0x18 & -0x1000000;
    o->f3b0 = v;
}
