typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
    char unknown30a[0x46];
    int f350;
    char unknown354[0x28];
    int f37c;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
};
extern void operation_8c0368ec(void *);
void operation_8c021d68(Object *o)
{
    Frame frame;
    int v1;
    o->f350 |= 0x4000000;
    if (o != 0) {
        v1 = (int)(o->f308 == 2);
        if (v1 != 0) {
            return;
        }
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f04 = 0;
    (&frame)->f00 = 0x1f;
    (&frame)->f01 = 2;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = (int)(o->f37c);
    operation_8c0368ec((void *)(&frame));
}
