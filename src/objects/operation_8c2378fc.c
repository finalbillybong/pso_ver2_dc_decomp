typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block1300 {
    int words[325];
} Block1300;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    char unknown24[0x44];
    int f68;
    int f6c;
    int f70;
    int f74;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c237c20(Object *);
extern void operation_8c248614(Object *);
extern void operation_8c238fcc(Object *);
Object *operation_8c2378fc(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c279200;
    o->tag = (int)(*(int *)0x8c339788);
    o->size = 0x78;
    *(Block1300 *)&*(Block1300 *)0x8c339ca0 = *(Block1300 *)&*(Block1300 *)0x8c33978c;
    call_8c237c20(o);
    operation_8c248614(o);
    o->f68 = 0;
    o->f6c = 0;
    o->f70 = 1;
    operation_8c238fcc(o);
    o->f74 = 0;
    o->f20 = 0;
    return o;
}
