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
    char unknown0[0x34];
    int f34;
};
extern void call_8c04a8ac(Arg0_2c *, int);
void operation_8c2238ac(Object *o)
{
    if (((o->f2c->f34 & 0x800)) == 0) {
        call_8c04a8ac((Arg0_2c *)(o->f2c), 1);
    }
}
