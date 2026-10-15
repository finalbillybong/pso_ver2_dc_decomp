typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_108 Arg0_108;
struct Object {
    char unknown0[0xf8];
    float ff8;
    int ffc;
    char unknown100[0x8];
    Arg0_108 *f108;
};
struct Arg0_108 {
    char unknown0[0x4];
    int f04;
};
extern void call_8c08914c(Object *);
void operation_8c0899cc(Object *o)
{
    float v3;
    o->ff8 += 4.0f;
    v3 = (float)(float)(unsigned int)(o->f108->f04 + -1);
    if (o->ff8 > v3) {
        o->ff8 = 0.0f;
    }
    o->ffc += 0x150;
    call_8c08914c(o);
}
