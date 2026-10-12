typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daac0 S_g8c4daac0;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0xc];
    Arg0_34 *f34;
    Arg0_38 *f38;
};
struct Arg0_34 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_g8c4daac0 {
    int f00;
};
extern int call_8c220ce0(void);
extern int operation_8c1571f4(void *);
extern int operation_8c1cdc80(void *);
extern void call_8c1a6fc8(int);
extern void operation_8c15913c(void *);
extern void call_8c220c40(int, int);
void operation_8c159080(Object *o)
{
    int t1;
    int t2;
    int t3;
    t1 = call_8c220ce0();
    if (t1 != 0) {
        if (o->f34 != 0 && ((o->f34->f80 & 0xffff & 2)) != 0) {
            t2 = operation_8c1571f4((void *)o->f34);
            if (t2 == 0) {
                t3 = operation_8c1cdc80(o->f38);
                call_8c1a6fc8((*(S_g8c4daac0 **)0x8c4daac0)->f00 + t3 * 0x1d8 + 0x1c0);
                o->f24 = 3;
                return;
            }
            if (t2 == 1) {
                operation_8c15913c((void *)o);
                call_8c220c40(0x19, 1);
                o->f24 = 0;
                return;
            }
        }
        if (o->f34 != 0 && ((o->f34->f80 & 0xffff & 4)) != 0) {
            operation_8c15913c((void *)o);
            call_8c220c40(0x19, 1);
            o->f24 = 0;
        }
    }
}
