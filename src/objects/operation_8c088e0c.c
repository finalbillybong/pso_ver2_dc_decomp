typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_12c Arg0_12c;
struct Object {
    char unknown0[0x120];
    float f120;
    char unknown124[0x8];
    Arg0_12c *f12c;
};
struct Arg0_12c {
    char unknown0[0x4];
    int f04;
};
extern void operation_8c0889f0(void *);
void operation_8c088e0c(Object *o)
{
    float v3;
    o->f120 += 4.0f;
    v3 = (float)(float)(unsigned int)(o->f12c->f04 + -1);
    if (o->f120 > v3) {
        o->f120 = 0.0f;
    }
    operation_8c0889f0((void *)o);
}
