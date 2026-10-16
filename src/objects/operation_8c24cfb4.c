typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x138];
    unsigned char f138;
    char unknown139[0x3];
    Arg0_13c *f13c;
    unsigned char f140;
};
struct Arg0_13c {
    char unknown0[0x198];
    short f198;
};
extern void call_8c04a7a0(Arg0_13c *, short);
void operation_8c24cfb4(Object *o)
{
    unsigned char v1;
    v1 = (unsigned char)o->f138;
    if (v1 != 2) {
        if (*(int *)0x8c4703c0 != 3) {
            call_8c04a7a0((Arg0_13c *)(o->f13c), (int)(o->f140));
            return;
        }
        if ((v1) == 0) {
            call_8c04a7a0((Arg0_13c *)(o->f13c), 0xc8);
        } else {
            call_8c04a7a0((Arg0_13c *)(o->f13c), 0x190);
        }
        return;
    }
    call_8c04a7a0((Arg0_13c *)(o->f13c), o->f13c->f198);
}
