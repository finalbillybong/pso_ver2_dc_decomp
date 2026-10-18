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
    unsigned char f00;
    char f01;
    short f02;
    short f04;
    short f06;
};
extern int call_8c03c0c8(void *, int, int);
extern int operation_8c03c0ac(void *, int);
extern void operation_8c0368a8(void *);
void operation_8c023628(Object *o, int a1)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    t1 = call_8c03c0c8((void *)(((char *)o + 0x74c)), 1, a1);
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
        (&frame)->f00 = 0x83;
        (&frame)->f01 = 2;
        (&frame)->f02 = o->f20;
        (&frame)->f04 = a1;
        t2 = operation_8c03c0ac((void *)(((char *)o + 0x74c)), a1);
        (&frame)->f06 = (char)t2;
        operation_8c0368a8((void *)(&frame));
    }
}
