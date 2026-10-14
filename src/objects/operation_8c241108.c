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
    char unknown0[0xc];
};
extern int call_8c1aaabc(int);
extern void call_8c075894(Object *, void *, int, Frame *);
extern void create_effect_777c(void *, int);
void operation_8c241108(Object *o)
{
    Frame frame;
    int t1;
    t1 = call_8c1aaabc((int)((int)o->f13c + 0x754));
    if ((short)t1 == 2) {
        call_8c075894(o, (void *)(o->f13c), 2, (Frame *)((&frame)));
        create_effect_777c((void *)(&frame), 0x1be);
    }
}
