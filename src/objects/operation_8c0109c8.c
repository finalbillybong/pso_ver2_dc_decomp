typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    short f28;
    char unknown2a[0x84a];
    short f874;
};
extern int call_8c3ca534(int, void *, void *);
int operation_8c0109c8(Object *o)
{
    int t1;
    if (o->f28 != -1) {
        o->f874 = o->f28;
        *(int *)0x8c4621a8 = 1;
        t1 = call_8c3ca534(0x4117, &o->f874, ((char *)o + 0x884));
        *(int *)0x8c4621a8 = 0;
        return t1;
    }
    return 0;
}
