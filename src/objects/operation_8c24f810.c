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
    char unknown140[0xe4];
    short f224;
    char unknown226[0xe];
    int f234;
};
struct Frame {
    char unknown0[0xc];
};
extern void call_8c075894(Object *, void *, int, Frame *);
extern void create_effect_777c(void *, int);
void operation_8c24f810(Object *o)
{
    Frame frame;
    o->f234 = 2;
    call_8c075894(o, (void *)(o->f13c), (int)(o->f224), (Frame *)((&frame)));
    create_effect_777c((void *)(&frame), 9);
}
