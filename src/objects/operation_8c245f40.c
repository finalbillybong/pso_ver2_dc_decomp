typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_14 Arg0_14;
struct Object {
    char unknown0[0x14];
    Arg0_14 *f14;
};
struct Arg0_14 {
    char unknown0[0x4];
    short f04;
};
extern void *hierarchy_is_active(Arg0_14 *);
void operation_8c245f40(Object *o)
{
    void *t1;
    if (o->f14 != 0) {
        t1 = hierarchy_is_active(o->f14);
        if (t1 != 0) {
            o->f14->f04 |= 1;
        }
    }
}
