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
    char unknown30a[0x14e];
    float f458;
};
struct Frame {
    char f00;
    char f01;
    short f02;
};
extern void call_8c184c00(void *);
extern void operation_8c0368a8(void *);
void operation_8c027550(Object *o)
{
    Frame frame;
    int v1;
    o->f458 = 0.0f;
    call_8c184c00((void *)(((char *)o + 0x418)));
    if (o != 0) {
        v1 = (int)(o->f308 == 2);
        if (v1 != 0) {
            return;
        }
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x36;
    (&frame)->f01 = 1;
    (&frame)->f02 = o->f20;
    operation_8c0368a8((void *)(&frame));
}
