typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
struct Object {
    char unknown0[0x88];
    short f88;
    char unknown8a[0x6];
    int f90;
    Arg0_94 *f94;
};
struct Arg0_94 {
    char unknown0[0x198];
    short f198;
    char unknown19a[0x196];
    short f330;
};
int operation_8c10ea5c(Object *o)
{
    int v17;
    short v2;
    short v4;
    short v1;
    short v3;
    v1 = (short)o->f94->f330;
    v2 = (short)o->f94->f198;
    v3 = o->f88;
    if (!(v3 > 0)) {
        o->f88 = v1;
        return 0;
    }
    v4 = v3 - v1;
    if (v3 >= (short)v1) {
        if ((float)(short)v4 > ((float)(short)v2 * 0.3f)) {
            o->f90 |= 0x40;
        } else if ((float)(short)v4 > ((float)(short)v2 * 0.2f)) {
            o->f90 |= 0x80;
        } else if ((float)(short)v4 > ((float)(short)v2 * 0.01f)) {
            o->f90 |= 0x100;
        }
    } else {
        o->f90 |= 0x200;
    }
    o->f88 = v1;
    v17 = (int)((short)v4 != 0);
    return (int)(v17);
}
