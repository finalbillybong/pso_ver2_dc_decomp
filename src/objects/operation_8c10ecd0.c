typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_a8 Arg0_a8;
struct Object {
    char unknown0[0xa8];
    Arg0_a8 *fa8;
};
struct Arg0_a8 {
    char unknown0[0x4];
    short f04;
};
extern void call_8c052124(void *);
extern void call_8c011ed8(Object *);
Object *operation_8c10ecd0(Object *o, int a1)
{
    if (o != 0) {
        if (o->fa8 != 0) {
            call_8c052124((void *)o->fa8);
            o->fa8->f04 |= 1;
            o->fa8 = (Arg0_a8 *)0;
        }
        if ((short)a1 > 0) {
            call_8c011ed8(o);
        }
    }
    return o;
}
