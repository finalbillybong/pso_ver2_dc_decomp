typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x2c];
    Arg0_2c *f2c;
};
extern void request_resource_release(void *);
void operation_8c233190(Object *o)
{
    if (o->f2c != 0) {
        request_resource_release(o->f2c);
        o->f2c = 0;
    }
}
