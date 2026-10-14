typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x94];
    int f94;
    char unknown98[0x4];
    float f9c;
};
extern int target_within_xyz_8c1a9f14(void *, float);
int operation_8c1a9ec4(Object *o)
{
    int t1;
    t1 = target_within_xyz_8c1a9f14((void *)o, (float)(o->f9c * o->f9c));
    if (t1 != 0) {
        if (o->f94 != 0) {
            o->f94 = 0;
            return 1;
        }
        return 0;
    }
    if (o->f94 != 0) {
        return 2;
    }
    o->f94 = 1;
    return 3;
}
