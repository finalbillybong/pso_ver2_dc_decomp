typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_68 Arg0_68;
struct Object {
    char unknown0[0x68];
    Arg0_68 *f68;
};
extern void call_8c199b74(void *);
extern void call_8c0db30c(Object *);
extern void interpolate_view_parameters(void *);
extern void update_view_nodes(void *, void *);
void operation_8c21cd08(Object *o)
{
    call_8c199b74((void *)(o->f68));
    call_8c0db30c(o);
    interpolate_view_parameters((void *)o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
