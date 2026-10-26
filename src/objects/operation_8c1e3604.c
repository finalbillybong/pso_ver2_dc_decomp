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
    char unknown8[0x8];
    int f10;
};
void operation_8c1e3604(Object *o)
{
    if (((o->f68 & 4)) == 0) {
        o->f70->f04 = (int)(o->f70->f10);
    }
}
