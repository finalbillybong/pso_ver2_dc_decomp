typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x50];
    Arg0_13c *f13c;
};
struct Arg0_13c {
    char unknown0[0x308];
    short f308;
};
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
    int f04;
    int f08;
};
extern int current_effect_mode(void);
extern void operation_8c0368a8(void *);
void operation_8c074ac4(Object *o, int a1)
{
    Frame frame;
    int v1;
    int t1;
    if (o->f13c != 0) {
        t1 = current_effect_mode();
        if (t1 != 0xf) {
            v1 = (int)(o->f13c->f308 == 2);
            if (v1 == 0) {
                (&frame)->f04 = -1;
                (&frame)->f00 = 0x61;
                (&frame)->f08 = 0;
                (&frame)->f01 = 3;
                (&frame)->f04 = (int)(o->fe8);
                (&frame)->f08 = a1;
                operation_8c0368a8((void *)(&frame));
            }
        }
    }
}
