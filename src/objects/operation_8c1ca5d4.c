typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x28];
    char f28;
    char unknown29[0x3];
    Arg0_2c *f2c;
};
struct Arg0_2c {
    char unknown0[0x5c];
    float f5c;
};
extern void operation_8c1b0330(float);
extern void call_8c1caad0(Object *);
extern void draw_screen_quad(Object *);
void operation_8c1ca5d4(Object *o)
{
    Arg0_2c *t;
    t = o->f2c;
    if (t != 0) {
        operation_8c1b0330(-1.0f / (t->f5c + 0.1495f));
    }
    switch (o->f28) {
    case 0:
    case 3:
        call_8c1caad0(o);
        return;
    case 1:
    case 2:
        draw_screen_quad(o);
        call_8c1caad0(o);
        return;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        break;
    }
}
