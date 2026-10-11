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
};
struct Arg0_394 {
    char unknown0[0x3a8];
    int f3a8;
};
void operation_8c1bca48(Object *o)
{
    if (o->f390 != 3) {
        o->f394->f3a8 += 1;
        o->f390 = 3;
    }
}
