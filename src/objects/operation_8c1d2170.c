typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_5c Arg0_5c;
struct Object {
    char unknown0[0x22];
    short f22;
    char unknown24[0x4];
    Arg0_28 *f28;
    Arg0_2c *f2c;
    int f30;
    Arg0_34 *f34;
    char unknown38[0x24];
    Arg0_5c *f5c;
};
struct Arg0_5c {
    char unknown0[0x72];
    short f72;
    short f74;
};
extern void operation_8c21f4d4(void *, int, int, int, int, int);
void operation_8c1d2170(Object *o)
{
    int v2;
    int v1;
    v2 = (int)o->f5c->f72;
    v1 = (int)o->f5c->f74;
    operation_8c21f4d4((void *)(o->f34), (int)(o->f22), v2, v1, (int)(o->f28), (int)(o->f2c));
    if (o->f30 != 0) {
        operation_8c21f4d4((void *)(o->f34), (int)(o->f22), (int)(0x40 - v2), v1, (int)(o->f28 == 0), (int)(o->f2c));
    }
}
