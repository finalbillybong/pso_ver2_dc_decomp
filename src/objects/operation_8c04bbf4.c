typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
};
extern void call_8c04bc48(Object *, int, int);
Object *operation_8c04bbf4(Object *o)
{
    o->tag = 0;
    call_8c04bc48(o, 0, 0);
    return o;
}
