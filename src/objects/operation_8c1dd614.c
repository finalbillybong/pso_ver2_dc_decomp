typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x22];
    unsigned short f22;
    Arg0_24 *f24;
    char unknown28[0x4];
    Arg0_2c *f2c;
};
struct Arg0_2c {
    char unknown0[0x70];
    int f70;
};
extern int operation_8c1e2330(void *);
int operation_8c1dd614(Object *o)
{
    int t1;
    t1 = operation_8c1e2330(o->f24);
    if (t1 != 0) {
        return 1;
    }
    if (((o->f22 & 2)) == 0) {
        return 1;
    }
    if (o->f2c->f70 > 0) {
        return 1;
    }
    return 0;
}
