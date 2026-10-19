typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_18 Arg0_18;
struct Object {
    char unknown0[0x4];
    void *f04;
    char unknown8[0x10];
    Arg0_18 *dispatch;
};
extern void call_8c18de08(void *);
extern void destroy_field_8c0e14bc(void *, short);
extern void call_8c011ed8(Object *);
Object *operation_8c1e5d00(Object *o, int a1)
{
    if (o != 0) {
        o->f04 = (void *)0x8c277edc;
        call_8c18de08((void *)(o->dispatch));
        destroy_field_8c0e14bc((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c011ed8(o);
        }
    }
    return o;
}
