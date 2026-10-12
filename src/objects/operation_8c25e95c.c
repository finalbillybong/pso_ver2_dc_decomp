typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c340614 S_g8c340614;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    int f28;
    char unknown2c[0x4];
    Arg0_30 *f30;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_L8c41cba0 g_8c41cba0;
extern void call_8c25ebe0(void);
extern void call_8c25ecd4(Object *);
extern int operation_8c1571f4(void *);
extern void call_8c248980(void *);
extern void call_8c25ec50(Object *);
extern void call_8c25eb44(Object *);
extern void call_8c25ed88(Object *);
extern void call_8c25eb84(Object *);
void operation_8c25e95c(Object *o)
{
    int v22;
    int v42;
    int t1;
    call_8c25ebe0();
    if (o->f30 == 0) {
        call_8c25ecd4(o);
    }
    v42 = (int)0;
    if (((o->f30->f80 & 0xffff & 2)) != 0) {
        t1 = operation_8c1571f4((void *)o->f30);
        if (t1 == 2) {
            v22 = (int)1;
        } else {
            call_8c248980(*(S_g8c340614 **)((char *)0x8c340614 + (t1 << 2)));
            call_8c25ec50(o);
            call_8c25eb44(o);
            o->f28 = 1;
            o->f20 = 3;
            return;
        }
        v42 = (int)v22;
    }
    if (v42 == 0 && (((&g_8c41cba0)->f28 & 2)) == 0) {
        return;
    }
    call_8c25ed88(o);
    call_8c25ec50(o);
    call_8c25eb84(o);
    o->f20 = 1;
}
