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
struct Arg0_2c {
    char unknown0[0x38];
    float f38;
    float f3c;
};
extern void call_8c0dc854(Arg0_2c *);
void operation_8c051db4(Object *o, float f0, float f1)
{
    o->f2c->f38 = f0;
    o->f2c->f3c = f1;
    call_8c0dc854(o->f2c);
}
