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
};
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    int f08;
};
extern void call_8c0242e0(Object *);
extern int operation_8c02c1ac(void *);
extern void operation_8c0368a8(void *);
extern void call_8c022bbc(Object *);
void operation_8c024260(Object *o, int a1, int a2)
{
    Frame frame;
    int v1;
    int t1;
    call_8c0242e0(o);
    t1 = operation_8c02c1ac((void *)o);
    if (t1 == 0) {
        if (o != 0) {
            v1 = (int)(o->f308 == 2);
            if (v1 != 0) {
                return;
            }
        }
        (&frame)->f00 = 0x1a;
        (&frame)->f01 = 1;
        (&frame)->f04 = -1;
        (&frame)->f08 = 0;
        (&frame)->f00 = 0x29;
        (&frame)->f01 = 3;
        (&frame)->f02 = o->f20;
        (&frame)->f04 = a2;
        (&frame)->f08 = 1;
        operation_8c0368a8((void *)(&frame));
        call_8c022bbc(o);
    }
}
