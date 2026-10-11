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
    char unknown20[0x20];
    int f40;
    int f44;
    int f48;
    float f4c;
    float f50;
    float f54;
    int f58;
    int f5c;
    short f60;
};
extern void initialize_position_controller(Object *, int);
extern void call_8c12b880(void *, int, int);
extern void call_8c0bbb24(Object *);
Object *initialize_controller_8c0bb8c4(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    initialize_position_controller(o, a1);
    o->dispatch = (void *)0x8c2662d0;
    o->tag = *(int *)0x8c305930;
    o->size = 0x9c;
    o->f40 = 0;
    o->f44 = 0;
    o->f48 = 0;
    o->f4c = 0.0f;
    o->f50 = 0.0f;
    o->f54 = 0.0f;
    o->f58 = 0;
    o->f5c = 0;
    o->f60 = 1;
    call_8c12b880(((char *)o + 0x7c), 0, 0x20);
    call_8c0bbb24(o);
    return o;
}
