typedef struct Object Object;
struct Object {
    char unknown0[0x22];
    short f22;
};
extern void call_8c2269a8(Object *);
void operation_8c22697c(Object *o)
{
    short v1;
    v1 = o->f22;
    o->f22 = v1 - 1;
    if (!(v1 > 0)) {
        call_8c2269a8(o);
    }
}
