typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
};
struct Object {
    float tag;
    float f04;
    float f08;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
extern S_g8c46ee80 *g_8c46ee80;
extern float call_8c37e494(Frame *);
extern void call_8c37b630(Frame *);
void operation_8c0b62d4(Object *o, Arg1 *a1, float f0)
{
    Frame frame;
    float t1;
    if (g_8c46ee80 != 0) {
        (&frame)->f00 = g_8c46ee80->f90 - o->tag;
        (&frame)->f04 = g_8c46ee80->f94 - o->f04;
        (&frame)->f08 = g_8c46ee80->f98 - o->f08;
        t1 = call_8c37e494((&frame));
        if (t1 != 0.0f) {
            call_8c37b630((&frame));
        }
        a1->f00 = (&frame)->f00 * f0 + o->tag;
        a1->f04 = (&frame)->f04 * f0 + o->f04;
        a1->f08 = (&frame)->f08 * f0 + o->f08;
    }
}
