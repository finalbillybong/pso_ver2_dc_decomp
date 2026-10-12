typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
struct Object {
    Arg0_0 *tag;
};
extern void call_8c36cde4(void *);
Object *operation_8c1226d0(Object *o, int a1)
{
    if (o != 0) {
        call_8c36cde4(o->tag);
        if ((short)a1 > 0) {
            call_8c36cde4((void *)o);
        }
    }
    return o;
}
