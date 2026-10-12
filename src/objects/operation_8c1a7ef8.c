typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    int f24;
    int f28;
};
extern void call_8c34d4e8(void *);
extern void call_8c03ed70(void *);
extern void call_8c011ed8(Object *);
Object *operation_8c1a7ef8(Object *o, int a1)
{
    if (o != 0) {
        if (o->f28 == 0) {
            call_8c34d4e8(o->f20);
        }
        if (o->f24 == 0) {
            call_8c03ed70((void *)0x8c323ed4);
        }
        if ((short)a1 > 0) {
            call_8c011ed8(o);
        }
    }
    return o;
}
