typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_1c Arg0_1c;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x4];
    void *f04;
    char unknown8[0x14];
    Arg0_1c *f1c;
    Arg0_20 *f20;
};
extern void call_8c18de08(void *);
extern void destroy_field_8c11a88c(void *, short);
extern void call_8c011ed8(Object *);
Object *operation_8c1db8ac(Object *o, int a1)
{
    if (o != 0) {
        o->f04 = (void *)0x8c277304;
        call_8c18de08((void *)(o->f20));
        call_8c18de08((void *)(o->f1c));
        destroy_field_8c11a88c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c011ed8(o);
        }
    }
    return o;
}
