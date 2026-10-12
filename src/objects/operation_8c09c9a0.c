typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
};
extern void initialize_game_8c010514(void *);
extern void set_field_8c09ca50(void *);
Object *operation_8c09c9a0(Object *o)
{
    Object **home = &o;
    (void)home;
    {
        Object *base = o;
        initialize_game_8c010514((void *)base);
        base->dispatch = (void *)0x8c260f10;
        base->tag = *(int *)0x8c2e2174;
        base->size = 0xa7c;
    }
    o->dispatch = (void *)0x8c2658d4;
    o->tag = *(int *)0x8c301ec8;
    o->size = 0x1034;
    set_field_8c09ca50((void *)o);
    return o;
}
