typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
struct Object {
    char unknown0[0xf4];
    float ff4;
    int ff8;
    char unknownfc[0x8];
    Arg0_104 *f104;
};
struct Arg0_104 {
    char unknown0[0x4];
    int f04;
};
extern void call_8c08914c(Object *);
void operation_8c089f10(Object *o)
{
    float v3;
    o->ff4 += 4.0f;
    v3 = (float)(float)(unsigned int)(o->f104->f04 + -1);
    if (o->ff4 > v3) {
        o->ff4 = 0.0f;
    }
    o->ff8 += 0x150;
    call_8c08914c(o);
}
