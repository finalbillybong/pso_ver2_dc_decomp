typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x8c];
    int f8c;
    char unknown90[0x90];
    float f120;
    char unknown124[0x18];
    Arg0_13c *f13c;
};
struct Arg0_13c {
    char unknown0[0x4];
    int f04;
};
extern void call_8c0889f0(Object *);
void operation_8c1578e8(Object *o)
{
    float v3;
    if (o->f8c >= 0) {
        o->f120 += 4.0f;
        v3 = (float)(float)(unsigned int)(o->f13c->f04 + -1);
        if (o->f120 > v3) {
            o->f120 = 0.0f;
        }
        call_8c0889f0(o);
    }
}
