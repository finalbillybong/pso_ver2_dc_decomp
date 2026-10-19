typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    void *f24;
};
extern void call_8c011ed8(Object *);
Object *operation_8c16a0d8(Object *o, int a1)
{
    if (o != 0) {
        o->f24 = (void *)0x8c2701c0;
        if (o != 0) {
            o->f24 = (void *)0x8c266048;
            if (o != 0) {
                o->f24 = (void *)0x8c266054;
            }
        }
        if ((short)a1 > 0) {
            call_8c011ed8(o);
        }
    }
    return o;
}
