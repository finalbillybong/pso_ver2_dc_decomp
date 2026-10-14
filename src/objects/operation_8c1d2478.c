typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_40 Arg0_40;
struct Object {
    char unknown0[0x40];
    Arg0_40 *f40;
};
struct Arg0_40 {
    char unknown0[0x88];
    short f88;
};
extern int operation_8c1571f4(void *);
extern int get_field_8c157604(void *, short);
int operation_8c1d2478(Object *o)
{
    int v1;
    int t1;
    int t2;
    t1 = operation_8c1571f4((void *)(o->f40));
    if (t1 != 0x20) {
        return 0;
    }
    t2 = get_field_8c157604((void *)(o->f40), o->f40->f88);
    v1 = (int)(t2 != 0);
    return (int)(v1);
}
