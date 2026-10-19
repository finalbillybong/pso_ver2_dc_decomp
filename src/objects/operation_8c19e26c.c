typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
struct Object {
    int tag;
    void *f04;
    char unknown8[0x18];
    Arg0_20 *f20;
    Arg0_24 *f24;
};
extern void call_8c18de08(void *);
extern void destroy_field_8c11a88c(void *, short);
extern void call_8c011ed8(Object *);
Object *operation_8c19e26c(Object *o, int a1)
{
    if (o != 0) {
        o->f04 = (void *)0x8c272c58;
        if (o->f24 != 0 && ((o->tag & 0x10)) != 0) {
            o->tag &= -0x11;
            call_8c18de08((void *)(o->f24));
        }
        if (o->f20 != 0 && ((o->tag & 8)) != 0) {
            o->tag &= -9;
            call_8c18de08((void *)(o->f20));
        }
        destroy_field_8c11a88c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c011ed8(o);
        }
    }
    return o;
}
