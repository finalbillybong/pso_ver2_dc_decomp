typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x22];
    unsigned short f22;
    Arg0_24 *f24;
};
extern void call_8c1dcdf0(Object *);
extern void operation_8c1dcf9c(void *);
extern int operation_8c1e2330(void *);
void operation_8c1dcc40(Object *o)
{
    unsigned short v1;
    int t1;
    v1 = (unsigned short)o->f22;
    if (((v1 & 1)) == 0 && ((v1 & 0x10)) == 0 && ((v1 & 0x20)) == 0) {
        call_8c1dcdf0(o);
        operation_8c1dcf9c((void *)o);
        t1 = operation_8c1e2330((void *)(o->f24));
        if (t1 != 0) {
            o->f22 |= 4;
            return;
        }
        o->f22 &= -5;
    }
}
