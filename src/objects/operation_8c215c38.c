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
    char unknown20[0x44];
    int f64;
    int f68;
    int f6c;
    char unknown70[0x8];
    int f78;
    char unknown7c[0x4];
    int f80;
    char unknown84[0x8];
    float f8c;
    float f90;
};
extern void initialize_base_8c0db1d0(void *, int);
extern void set_fields_8c215ed4(void *);
extern void call_8c215de0(Object *);
Object *operation_8c215c38(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c336064));
    o->dispatch = (void *)0x8c278298;
    o->tag = (int)(*(int *)0x8c336084);
    o->size = 0x98;
    o->f80 = a2;
    o->f6c = 0;
    o->f90 = 0.0f;
    o->f8c = 0.0f;
    o->f68 = 0;
    o->f78 = a1;
    set_fields_8c215ed4((void *)o);
    call_8c215de0(o);
    o->f64 = 0x1000000;
    return o;
}
