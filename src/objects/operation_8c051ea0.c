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
extern void operation_8c1dfd00(void *);
void operation_8c051ea0(Object *o)
{
    if (o->f2c != 0) {
        operation_8c1dfd00(o->f2c);
    }
}
