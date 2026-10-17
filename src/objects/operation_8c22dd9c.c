typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_4bc S_g8c467180_2c_4bc;
typedef struct S_g8c467180_2c_4d0 S_g8c467180_2c_4d0;
typedef struct S_g8c467180_44 S_g8c467180_44;
typedef struct S_g8c467180_44_0 S_g8c467180_44_0;
typedef struct Object Object;
typedef struct Arg0_88 Arg0_88;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x28];
    int f54;
    char unknown58[0x30];
    Arg0_88 *f88;
    char unknown8c[0x8];
    int f94;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
    char unknown30[0x14];
    S_g8c467180_44 *f44;
};
struct S_g8c467180_2c {
    char unknown0[0x4bc];
    S_g8c467180_2c_4bc *f4bc;
    char unknown4c0[0x10];
    S_g8c467180_2c_4d0 *f4d0;
};
struct Frame {
    Block8 f00;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_g8c467180_44 {
    S_g8c467180_44_0 *f00;
};
extern Block8 g_8c3384bc;
extern S_g8c467180 *g_8c467180;
extern S_L8c41cba0 g_8c41cba0;
extern char operation_8c22fda4(void);
extern int call_8c3727a0(int);
extern int call_8c37293e(int, int);
extern void operation_8c22e8e4(void *, int, int);
extern void request_resource_release(void *);
extern int operation_8c156c6c(int);
extern void clear_global_8c22fff0(void);
void operation_8c22dd9c(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = operation_8c22fda4();
    t2 = call_8c3727a0(t1);
    if (t2 != 0) {
        t3 = call_8c37293e(t1, 0);
        if (!(t3 >= 0)) {
            return;
        }
        if (o->f28 > t3) {
            operation_8c22e8e4((void *)o, (int)(g_8c467180->f2c->f4d0), 1);
            o->f94 = 0x12;
            return;
        }
        if (o->f88 != 0) {
            request_resource_release((void *)(o->f88));
            o->f88 = (Arg0_88 *)0;
        }
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c3384bc;
        t4 = operation_8c156c6c((int)(&frame));
        o->f88 = (Arg0_88 *)t4;
        operation_8c22e8e4((void *)o, (int)(g_8c467180->f2c->f4bc), 1);
        o->f54 = (int)(t1);
        o->f94 = 6;
        return;
    }
    if ((((&g_8c41cba0)->f28 & 2)) != 0) {
        clear_global_8c22fff0();
        operation_8c22e8e4((void *)o, (int)(g_8c467180->f44->f00), 1);
        o->f94 = 4;
    }
}
