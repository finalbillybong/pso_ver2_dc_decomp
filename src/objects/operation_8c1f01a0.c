typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_338 Arg0_338;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
    char unknown30a[0x26];
    short f330;
    char unknown332[0x6];
    Arg0_338 *f338;
    char unknown33c[0x14];
    int f350;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    char f04;
    char f05;
    short f06;
    int f08;
    short f0c;
    unsigned short f0e;
};
extern void bind_angle_sample_record(void *, void *);
extern void operation_8c0368a8(void *);
void operation_8c1f01a0(Object *o)
{
    Frame frame;
    int v6;
    if (((o->f350 & 0x400)) == 0) {
        bind_angle_sample_record((void *)(((char *)o + 0x5cc)), (void *)(o->f338));
    }
    if (o != 0) {
        v6 = (int)(o->f308 == 2);
        if (v6 != 0) {
            return;
        }
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x3d;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x53;
    (&frame)->f01 = 1;
    (&frame)->f02 = o->f20;
    operation_8c0368a8((void *)(&frame));
    (&frame)->f04 = 0x1a;
    (&frame)->f05 = 1;
    (&frame)->f08 = 0;
    (&frame)->f0c = 0;
    (&frame)->f0e = 0xffff;
    (&frame)->f04 = 0x2f;
    (&frame)->f05 = 3;
    (&frame)->f06 = o->f20;
    (&frame)->f08 = 0;
    (&frame)->f0c = o->f330;
    (&frame)->f0e = o->f20;
    operation_8c0368a8((void *)(&(&frame)->f04));
}
