typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    Arg0_24 *f24;
    int f28;
};
extern void request_resource_release(void *);
extern void operation_8c238290(void);
void operation_8c25f290(Object *o)
{
    if (!(--o->f28 >= 0)) {
        if (o->f24 != 0) {
            request_resource_release((void *)(o->f24));
            o->f24 = (Arg0_24 *)0;
        }
        operation_8c238290();
        o->f04 |= 1;
    }
}
