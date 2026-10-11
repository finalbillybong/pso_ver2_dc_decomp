typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_394 Arg0_394;
struct Object {
    char unknown0[0x390];
    int f390;
    Arg0_394 *f394;
    char unknown398[0x2c];
    int f3c4;
};
struct Arg0_394 {
    char unknown0[0x3a8];
    int f3a8;
};
void set_fields_8c1bbd54(Object *o)
{
    o->f394->f3a8 += 1;
    o->f3c4 = 0;
    o->f390 = 3;
}
