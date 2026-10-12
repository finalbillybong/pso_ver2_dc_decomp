typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x24];
    int f24;
    int f28;
    Arg0_2c *f2c;
};
extern void apply_resource_37d534(void *);
extern void call_8c34d4e8(void *);
void operation_8c22c190(Object *o)
{
    if (o->f24 == 2) {
        apply_resource_37d534(((char *)o + 0x30));
    }
    if (o->f24 == 1) {
        call_8c34d4e8(o->f2c);
    }
    o->f24 = 0;
    o->f28 = -1;
}
