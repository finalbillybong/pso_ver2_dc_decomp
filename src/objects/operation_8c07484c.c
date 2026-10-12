typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xde];
    short fe4;
    char unknowne6[0x56];
    int f13c;
};
extern void operation_8c0748a4(void *, int);
extern void call_8c0748f4(Object *);
void operation_8c07484c(Object *o, int a1)
{
    if (a1 == 3) {
        o->f13c = 0;
    }
    if (a1 == 0) {
        o->f13c = 0;
        operation_8c0748a4((void *)o, 0);
        o->f04 &= -0x11;
    } else {
        call_8c0748f4(o);
        o->f04 |= 0x10;
    }
    o->fe4 = a1;
}
