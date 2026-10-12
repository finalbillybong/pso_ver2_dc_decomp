typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xd8];
    int f218;
};
struct Arg0_13c {
    char unknown0[0x330];
    short f330;
};
extern void call_8c07ddcc(Object *, int);
extern void call_8c07dac0(Object *, int);
void operation_8c07d820(Object *o)
{
    if (o->f218 == 0x5a) {
        if (!(o->f13c->f330 > 0)) {
            return;
        }
        call_8c07ddcc(o, 0xf);
        return;
    }
    if (o->f218 > 0x5a) {
        call_8c07dac0(o, 1);
    }
}
