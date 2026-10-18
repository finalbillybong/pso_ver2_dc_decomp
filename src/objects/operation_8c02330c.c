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
    char f0c;
    char f0d;
    short f0e;
    int f10;
    int f14;
};
struct S_c8c03b55c {
    char unknown0[0xe8];
    int fe8;
};
extern int operation_8c02c1ac(void *);
extern void operation_8c0368a8(void *);
extern S_c8c03b55c *call_8c03b55c(void *, int);
extern int call_8c074560(S_c8c03b55c *, Object *, int);
void operation_8c02330c(Object *o, int a1, int a2)
{
    Frame frame;
    int v1;
    int v3;
    int t1;
    S_c8c03b55c *t2;
    int t3;
    t1 = operation_8c02c1ac((void *)o);
    if (t1 == 0) {
        if (o != 0) {
            v1 = (int)(o->f308 == 2);
            if (v1 != 0) {
                return;
            }
        }
        (&frame)->f0c = 0x1a;
        (&frame)->f0d = 1;
        (&frame)->f10 = -1;
        (&frame)->f14 = 0;
        (&frame)->f0c = 0x29;
        (&frame)->f0d = 3;
        (&frame)->f0e = o->f20;
        (&frame)->f10 = a1;
        (&frame)->f14 = a2;
        operation_8c0368a8((void *)(&(&frame)->f0c));
        t2 = call_8c03b55c((void *)(((char *)o + 0xbcc)), 6);
        if (t2 != 0) {
            t3 = call_8c074560(t2, o, 0);
            if (t3 == 0) {
                if (o != 0) {
                    v3 = (int)(o->f308 == 2);
                    if (v3 != 0) {
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
                (&frame)->f04 = (int)(t2->fe8);
                operation_8c0368a8((void *)(&frame));
            }
        }
    }
}
