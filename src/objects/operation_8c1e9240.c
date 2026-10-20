typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2d0];
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
    Vector3 f0c;
};
struct Arg1 {
    Vector3 f00;
};
extern int operation_8c02c0c4(Object *);
extern int operation_8c01d728(void *);
extern void operation_8c0368a8(void *);
void operation_8c1e9240(Object *o, Arg1 *a1, int a2)
{
    Frame frame;
    int v1;
    int v3;
    int t1;
    int t2;
    if (o != 0) {
        v1 = (int)(o->f308 == 2);
        if (v1 != 0) {
            return;
        }
    }
    v3 = (int)(((o->f34 & 0x100000)) != 0);
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x3d;
    (&frame)->f01 = 1;
    (&frame)->f04 = 0;
    (&frame)->f06 = 0;
    (&frame)->f08 = -1;
    (&frame)->f0a = -1;
    (&frame)->f00 = 0x3f;
    (&frame)->f01 = 6;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = v3;
    (&frame)->f06 = a2;
    t1 = operation_8c02c0c4(o);
    (&frame)->f08 = t1;
    t2 = operation_8c01d728((void *)o);
    (&frame)->f0a = t2;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&a1->f00;
    operation_8c0368a8((void *)(&frame));
}
