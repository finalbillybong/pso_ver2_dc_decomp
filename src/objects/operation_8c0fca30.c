typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d0];
    short f308;
    char unknown30a[0x82];
    int f38c;
};
int operation_8c0fca30(Object *o)
{
    int v2;
    int v3;
    int v10;
    if (o == 0) {
        return 0;
    }
    if (((o->f34 & 0x10000000)) != 0) {
        v2 = (int)(o->f308 == 3);
        if (v2 == 0) {
            v3 = (int)(o->f308 == 6);
            if (v3 == 0) {
                goto L_8c0fca5e;
            }
        }
        return 0;
L_8c0fca5e:;
        return 1;
    }
    v10 = (int)o->f34;
    if (((o->f34 & 0x20000000)) != 0) {
        if (((o->f34 & 0x40000000)) != 0) {
            return 0;
        }
        return o->f38c != 0;
    }
    return ((v10 & -0x80000000)) != 0;
}
