typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_9c Arg0_9c;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x84];
    char f84;
    char unknown85[0x1];
    short f86;
    char unknown88[0x14];
    Arg0_9c *f9c;
};
struct S_vv1 {
    float f00;
    float f04;
};
extern float call_8c37e2c0(float);
void operation_8c2254ec(Object *o)
{
    S_vv1 *v1;
    float t1;
    t1 = call_8c37e2c0((float)o->f86 / 4.0f);
    o->f84 = (int)t1;
    t1 = (float)o->f84 * 40.0f + 18.0f;
    v1 = (S_vv1 *)o->f9c;
    v1->f00 = 173.0f;
    v1->f04 = t1;
}
