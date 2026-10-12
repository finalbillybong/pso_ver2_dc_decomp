typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_8 Arg0_8;
struct Object {
    char unknown0[0x8];
    Arg0_8 *f08;
};
extern void call_8c21884c(void);
extern void call_8c18de08(void *);
extern void call_8c011ed8(Object *);
Object *operation_8c2187ac(Object *o, int a1)
{
    if (o != 0) {
        call_8c21884c();
        call_8c18de08(o->f08);
        if ((short)a1 > 0) {
            call_8c011ed8(o);
        }
    }
    return o;
}
