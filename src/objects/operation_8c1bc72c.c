typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    Vector3 f48;
    char unknown54[0x33c];
    int f390;
    char unknown394[0x18];
    float f3ac;
};
extern void call_8c3bdf60(void *, void *);
void operation_8c1bc72c(Object *o)
{
    o->f3ac += -0.0150000006f;
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    call_8c3bdf60((void *)(&o->f3c), (void *)(((char *)o + 0x3a8)));
    if (6.0f > o->f3c.f04) {
        o->f3ac = 0.0f;
        o->f3c.f04 = 6.0f;
        o->f390 = 2;
    }
}
