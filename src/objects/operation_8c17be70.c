typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
};
struct Frame {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
};
extern void call_8c075894(Object *, void *, int, Frame *);
extern void create_effect_777c(void *, int);
void operation_8c17be70(Object *o)
{
    Frame frame;
    call_8c075894(o, (void *)(o->f13c), 2, (Frame *)((&frame)));
    (&frame)->f04 -= 15.0f;
    create_effect_777c((void *)(&frame), 0x1d2);
}
