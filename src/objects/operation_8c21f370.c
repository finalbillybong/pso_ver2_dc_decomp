typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
struct Object {
    int tag;
    char f04;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x4a4];
    int f4a4;
    int f4a8;
};
int operation_8c21f370(Object *o)
{
    int v1;
    if (((o->tag & 1)) != 0) {
        v1 = (int)1;
    } else {
        if (((o->tag & 2)) != 0) {
            v1 = (int)1;
        } else {
            v1 = (int)0;
        }
    }
    if (v1 == 0) {
        return (int)((*(S_g8c467180 **)0x8c467180)->f2c->f4a4);
    }
    if (o->f04 == 0) {
        o = (Object *)((*(S_g8c467180 **)0x8c467180)->f2c->f4a8);
    } else {
        o = (Object *)(&o->f04);
    }
    return (int)o;
}
