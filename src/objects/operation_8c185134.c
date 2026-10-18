typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    unsigned short f3c;
};
struct S_c8c021ef8 {
    char unknown0[0x308];
    short f308;
};
struct Frame {
    char f00;
    char f01;
    short f02;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c0368a8(void *);
void operation_8c185134(Object *o)
{
    Frame frame;
    int v1;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)(o->f3c));
    if (t1 != 0) {
        v1 = (int)(t1->f308 == 2);
        if (v1 != 0) {
            return;
        }
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x3a;
    (&frame)->f01 = 1;
    (&frame)->f02 = o->f3c;
    operation_8c0368a8((void *)(&frame));
}
