typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Object Object;
typedef struct S_x76992 S_x76992;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x32];
    int f38;
    char unknown3c[0x4];
    Vector3 f40;
    char unknown4c[0x8];
    short f54;
    char unknown56[0x2];
    int f58;
    char unknown5c[0x4];
    int f60;
};
struct S_c8c053d84 {
    char unknown0[0x64];
    int f64;
    char unknown68[0x74];
    int fdc;
};
struct S_x76992 {
    char unknown0[0x1c];
    Vector3 f1c;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
int operation_8c1c651c(Object *o)
{
    S_c8c053d84 *t1;
    t1 = lookup_object_by_id((unsigned short)(o->f54));
    if (t1 == 0) {
        o->f04 |= 1;
        return 0;
    }
    o->f40 = ((S_x76992 *)(t1->fdc + o->f58 * 0x2c))->f1c;
    o->f38 = (int)o->f60 + t1->f64;
    return 1;
}
