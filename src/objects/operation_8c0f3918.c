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
extern void call_8c18de08(void *);
extern void call_8c011ed8(Object *);
Object *operation_8c0f3918(Object *o, int a1)
{
    if (o != 0) {
        if (o->tag != 0) {
            call_8c18de08(o->tag);
            o->tag = (Arg0_0 *)0;
        }
        if ((short)a1 > 0) {
            call_8c011ed8(o);
        }
    }
    return o;
}
