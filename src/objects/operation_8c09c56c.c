typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x10];
    int f10;
    int f14;
    char unknown18[0x12c];
    int f144;
    int f148;
    char unknown14c[0x12c];
    int f278;
};
extern void call_8c37d534(void *);
void operation_8c09c56c(Object *o)
{
    if (o->f14 != 0 && o->f10 != 0) {
        call_8c37d534(((char *)o + 0x138));
    }
    if (o->f148 != 0 && o->f144 != 0) {
        call_8c37d534(((char *)o + 0x26c));
    }
    if (o->f278 != 0) {
        call_8c37d534(((char *)o + 0x3a0));
    }
}
