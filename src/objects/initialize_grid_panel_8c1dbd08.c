typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern void initialize_grid_view(Object *, void *);
extern void call_8c1dc0b4(Object *, int);
Object *initialize_grid_panel_8c1dbd08(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    initialize_grid_view(o, (void *)0x8c32aef0);
    o->dispatch = (void *)0x8c277334;
    call_8c1dc0b4(o, a1);
    return o;
}
