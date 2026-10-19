typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x162];
    Arg0_184 *f184;
    char unknown188[0x180];
    short f308;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    short f10;
    short f12;
};
struct Arg0_184 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    char unknownc[0xc];
    int f18;
};
extern int object_ready(void *);
extern void operation_8c0368a8(void *);
void operation_8c024d9c(Object *o)
{
    Frame frame;
    int v1;
    int v3;
    int t1;
    t1 = object_ready((void *)o);
    if (t1 != 0) {
        if (o != 0) {
            v1 = (int)(o->f308 == 2);
            if (v1 != 0) {
                return;
            }
        }
        (&frame)->f00 = 0x1a;
        (&frame)->f01 = 1;
        (&frame)->f04 = 0;
        (&frame)->f06 = 0;
        (&frame)->f08 = 0;
        (&frame)->f0a = 0;
        (&frame)->f0c = 0;
        (&frame)->f0e = 0;
        (&frame)->f10 = 0;
        (&frame)->f12 = 0;
        (&frame)->f00 = 0x30;
        (&frame)->f01 = 5;
        (&frame)->f02 = o->f20;
        (&frame)->f04 = o->f184->f00;
        (&frame)->f06 = o->f184->f02;
        (&frame)->f08 = o->f184->f04;
        (&frame)->f0a = o->f184->f06;
        (&frame)->f0c = o->f184->f08;
        (&frame)->f0e = o->f184->f0a;
        v3 = (int)o->f184->f18;
        if (v3 < 0) {
            v3 = 0;
        } else if (v3 > 0xc7) {
            v3 = 0xc7;
        }
        (&frame)->f10 = v3;
        (&frame)->f12 = 0;
        operation_8c0368a8((void *)(&frame));
    }
}
