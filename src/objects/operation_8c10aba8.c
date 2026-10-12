typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x8];
    Arg0_30 *f30;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int operation_8c1571f4(void *);
extern void request_resource_release(void *);
void operation_8c10aba8(Object *o)
{
    int t1;
    if (o->f30 != 0 && ((o->f30->f80 & 0xffff & 2)) != 0) {
        t1 = operation_8c1571f4((void *)o->f30);
        if (t1 == 0) {
            request_resource_release((void *)o->f30);
            o->f30 = (Arg0_30 *)0;
            o->f24 = 4;
            return;
        }
        if (t1 == 1) {
            request_resource_release((void *)o->f30);
            o->f30 = (Arg0_30 *)0;
            o->f24 = 5;
            return;
        }
    }
    if (o->f30 != 0 && ((o->f30->f80 & 0xffff & 4)) != 0) {
        request_resource_release((void *)o->f30);
        o->f30 = (Arg0_30 *)0;
        o->f24 = 5;
    }
}
