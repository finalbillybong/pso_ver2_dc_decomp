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
struct Arg0_184 {
    char unknown0[0x20];
    int f20;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    int f08;
};
extern void call_8c04a99c(Object *, int);
extern int operation_8c02c1ac(void *);
extern void operation_8c0368a8(void *);
extern void call_8c022bbc(Object *);
int operation_8c023a9c(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    int v1;
    int t1;
    if ((o->f184->f20 + a2) > 0xf423f) {
        return 0;
    }
    call_8c04a99c(o, a2);
    t1 = operation_8c02c1ac((void *)o);
    if (t1 == 0) {
        if (o != 0) {
            v1 = (int)(o->f308 == 2);
            if (v1 != 0) {
                goto L_8c023b10;
            }
        }
        (&frame)->f00 = 0x1a;
        (&frame)->f01 = 1;
        (&frame)->f04 = -1;
        (&frame)->f08 = 0;
        (&frame)->f00 = 0x29;
        (&frame)->f01 = 3;
        (&frame)->f02 = o->f20;
        (&frame)->f04 = a1;
        (&frame)->f08 = a3;
        operation_8c0368a8((void *)(&frame));
        call_8c022bbc(o);
    }
L_8c023b10:;
    return 1;
}
