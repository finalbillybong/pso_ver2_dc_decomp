typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_4 Arg0_38_2c_4;
typedef struct Arg0_38_2c_4_4 Arg0_38_2c_4_4;
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0x1f8];
    short f234;
};
struct Arg0_38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    char unknown0[0x4];
    Arg0_38_2c_4 *f04;
};
struct Arg0_38_2c_4 {
    char unknown0[0x4];
    Arg0_38_2c_4_4 *f04;
};
extern void call_8c0344f0(void *, short, int, int);
void operation_8c17be54(Object *o)
{
    call_8c0344f0((void *)(o->f38->f2c->f04->f04), o->f234, 0, 0);
}
