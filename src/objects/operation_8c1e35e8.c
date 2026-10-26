typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    char unknown6a[0x6];
    Arg0_70 *f70;
};
struct Arg0_70 {
    char unknown0[0x4];
    int f04;
};
void operation_8c1e35e8(Object *o)
{
    if (((o->f68 & 4)) == 0) {
        o->f70->f04 = 0;
    }
}
