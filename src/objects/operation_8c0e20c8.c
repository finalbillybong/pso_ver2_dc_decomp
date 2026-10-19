typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    int tag;
    void *f04;
    char unknown8[0x18];
    Arg0_20 *f20;
};
extern void call_8c18de08(void *);
extern void destroy_field_8c11a88c(void *, short);
extern void call_8c011ed8(Object *);
Object *operation_8c0e20c8(Object *o, int a1)
{
    if (o != 0) {
        o->f04 = (void *)0x8c2677a8;
        if (o->f20 != 0 && ((o->tag & 0x20)) != 0) {
            o->tag &= -0x21;
            call_8c18de08((void *)(o->f20));
        }
        destroy_field_8c11a88c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c011ed8(o);
        }
    }
    return o;
}
