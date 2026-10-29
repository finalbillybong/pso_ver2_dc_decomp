typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
struct Object {
    char unknown0[0x8c];
    int f8c;
    int f90;
    Arg0_94 *f94;
};
struct Arg0_94 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x160];
    short f198;
    short f19a;
    char unknown19c[0x194];
    short f330;
    short f332;
};
int operation_8c10e8fc(Object *o)
{
    float v1;
    int v7;
    int v19;
    int v3;
    v1 = (float)((float)o->f94->f330 / (float)o->f94->f198);
    v3 = 0;
    if (((o->f8c & 2)) != 0) {
        if (!(v1 > 0.25f)) {
            o->f90 |= 8;
            o->f8c |= 4;
            v3 = 1;
        }
        if (!(v1 > 0.75f)) {
            o->f90 |= 0x1000;
            v3 = 1;
        }
    } else {
        if (!(v1 > 0.75f)) {
            o->f90 |= 8;
            o->f8c |= 4;
            v3 = 1;
        }
    }
    if (!(v1 > 0.1f)) {
        o->f90 |= 0x800;
        o->f8c |= 4;
        v3 = (int)1;
    }
    v19 = (int)o->f94->f34;
    if (((v19 & 1)) == 0 && ((v19 & 2)) == 0 && ((v19 & 0x10)) == 0) {
    } else {
        o->f90 |= 2;
        o->f8c |= 4;
        v3 = (int)1;
    }
    v19 = o->f94->f332;
    v1 = (float)o->f94->f19a;
    if (!(((float)v19 / v1) > 0.2f) && v1 != 0.0f) {
        o->f8c |= 4;
        o->f90 |= 0x10;
    }
    return (int)(v3);
}
