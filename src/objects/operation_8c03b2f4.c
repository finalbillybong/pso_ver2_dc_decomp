typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    unsigned short tag;
    char unknown2[0x6];
    float f08;
};
struct S_c8c021ef8 {
    char unknown0[0x308];
    short f308;
};
struct Frame {
    unsigned char f00;
    char f01;
    short f02;
    float f04;
};
extern int g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c03b434(Object *);
extern void operation_8c0368a8(void *);
void operation_8c03b2f4(Object *o)
{
    Frame frame;
    int v1;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)(o->tag));
    if (t1 != 0) {
        v1 = (int)(t1->f308 == 2);
        if (v1 != 0) {
            return;
        }
    }
    if (g_8c418248 == o->tag) {
        call_8c03b434(o);
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f04 = 1.0f;
    (&frame)->f00 = 0x87;
    (&frame)->f01 = 2;
    (&frame)->f02 = o->tag;
    (&frame)->f04 = o->f08;
    operation_8c0368a8((void *)(&frame));
}
