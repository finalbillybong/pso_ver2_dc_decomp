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
    char unknown20[0x1c];
    int f3c;
    int f40;
    int f44;
    int f48;
};
extern void initialize_position_controller(void *, void *);
extern void initialize_text_buffer(void *, void *, int, int, int);
Object *operation_8c187094(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    initialize_position_controller((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2720c8;
    o->tag = (int)(*(int *)0x8c319af8);
    o->size = 0x84;
    o->f3c = 0;
    o->f40 = 0xf;
    o->f44 = 0;
    {
        char *v9;
        v9 = (char *)o;
        initialize_text_buffer((void *)(v9 + 0x4c), (void *)(v9 + 0x64), 4, 0x1a, 0x1f);
    }
    o->f48 = 1;
    return o;
}
