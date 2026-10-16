typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_bc8 Arg0_bc8;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x2e6];
    short f308;
    char unknown30a[0x46];
    int f350;
    char unknown354[0x1c0];
    int f514;
    char unknown518[0x198];
    short f6b0;
    char unknown6b2[0x516];
    Arg0_bc8 *fbc8;
};
struct Arg0_bc8 {
    char unknown0[0x24];
    int f24;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    char f04;
    char f05;
    short f06;
};
extern void call_8c0249fc(Object *);
extern void call_8c02a194(Object *);
extern void operation_8c0368a8(void *);
extern void call_8c02738c(Object *);
extern void operation_8c03bce0(void *, int);
extern void call_8c03b434(void *);
void operation_8c02718c(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int v3;
    int v13;
    int v14;
    int v24;
    v1 = (int)(o->f20 == *(int *)0x8c418248);
    if (v1 != 0) {
        call_8c0249fc(o);
        call_8c02a194(o);
        v2 = (int)(o->fbc8->f24 > 0);
        if (v2 == 0 && ((o->f350 & 2)) != 0) {
            o->f350 &= -3;
            if (o != 0) {
                v3 = (int)(o->f308 == 2);
                if (v3 != 0) {
                    goto L_8c02720e;
                }
            }
            (&frame)->f00 = 0x1a;
            (&frame)->f01 = 1;
            (&frame)->f00 = 0x2d;
            (&frame)->f01 = 1;
            (&frame)->f02 = o->f20;
            operation_8c0368a8((void *)(&frame));
        }
L_8c02720e:;
        call_8c02738c(o);
        v13 = (int)(((o->f350 & 1)) != 0);
        if (v13 != 0 && o->f6b0 >= 0 && !((short)--o->f6b0 >= 0)) {
            if (o != 0) {
                v14 = (int)(o->f308 == 2);
                if (v14 != 0) {
                    goto L_8c02726c;
                }
            }
            (&frame)->f04 = 0x1a;
            (&frame)->f05 = 1;
            (&frame)->f04 = 0x2d;
            (&frame)->f05 = 1;
            (&frame)->f06 = o->f20;
            operation_8c0368a8((void *)(&(&frame)->f04));
        }
L_8c02726c:;
        operation_8c03bce0((void *)(((char *)o + 0x5c0)), (int)o);
        v24 = (int)(((o->f514 & 1)) != 0);
        if (v24 != 0) {
            call_8c03b434((void *)(((char *)o + 0x510)));
        }
    }
}
