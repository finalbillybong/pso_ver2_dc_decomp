typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
};
extern int hierarchy_is_active(void *);
int operation_8c169508(Object *o)
{
    int t1;
    t1 = hierarchy_is_active((void *)(o->f20));
    if (t1 != 0) {
        return (int)(o->f20);
    }
    return 0;
}
