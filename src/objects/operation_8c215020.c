typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x48];
    int f64;
    int f68;
    int f6c;
    int f70;
};
extern void initialize_base_8c0db1d0(void *, int);
Object *operation_8c215020(Object *o)
{
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c335f68));
    o->dispatch = (void *)0x8c278238;
    o->f68 = 1;
    o->f6c = 2;
    o->f70 = 2;
    o->f64 = 0x1000000;
    return o;
}
