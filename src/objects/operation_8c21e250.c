typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_68 Arg0_68;
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0xc];
    float f4c;
    char unknown50[0x18];
    Arg0_68 *f68;
    char unknown6c[0x4];
    float f70;
};
struct Arg0_68 {
    char unknown0[0x4c];
    float f4c;
};
extern void call_8c0db30c(void);
extern void interpolate_view_parameters(void *);
extern void update_view_nodes(void *, void *);
void operation_8c21e250(Object *o)
{
    o->f3c = o->f68->f4c + o->f70;
    o->f4c = o->f3c;
    call_8c0db30c();
    interpolate_view_parameters((void *)o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
