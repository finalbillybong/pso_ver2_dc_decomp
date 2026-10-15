typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03b55c S_c8c03b55c;
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
struct S_c8c03b55c {
    char unknown0[0xe8];
    int fe8;
};
extern S_c8c03b55c *call_8c03b55c(void *, int);
extern int call_8c074560(S_c8c03b55c *, Object *, int);
extern void operation_8c0368a8(void *);
void operation_8c022bbc(Object *o)
{
    Frame frame;
    int v1;
    S_c8c03b55c *t1;
    int t2;
    t1 = call_8c03b55c((void *)(((char *)o + 0xbcc)), 6);
    if (t1 != 0) {
        t2 = call_8c074560(t1, o, 0);
        if (t2 == 0) {
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
            (&frame)->f00 = 0x26;
            (&frame)->f01 = 3;
            (&frame)->f02 = o->f20;
            (&frame)->f04 = (int)(t1->fe8);
            operation_8c0368a8((void *)(&frame));
        }
    }
}
