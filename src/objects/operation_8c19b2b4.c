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
    char unknown20[0x8];
    int f28;
    char unknown2c[0x28];
    int f54;
    char unknown58[0xf0];
    int f148;
    int f14c;
    char unknown150[0x4];
    int f154;
    int f158;
    int f15c;
    int f160;
    int f164;
    int f168;
    int f16c;
    int f170;
};
extern void initialize_control_manager(Object *, int);
Object *operation_8c19b2b4(Object *o, int a1, int a2)
{
    initialize_control_manager(o, a1);
    o->dispatch = (void *)0x8c2729cc;
    o->tag = *(int *)0x8c31cc18;
    o->size = 0x174;
    o->f148 = 0;
    o->f14c = 0;
    o->f154 = 0;
    o->f28 = a2;
    o->f158 = 0;
    o->f15c = 0;
    o->f160 = 0;
    o->f164 = 0;
    o->f54 = 0;
    o->f168 = 0;
    o->f16c = 0;
    o->f170 = 0;
    return o;
}
