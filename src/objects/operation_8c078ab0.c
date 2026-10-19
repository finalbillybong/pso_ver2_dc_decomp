typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    float f24;
    char unknown28[0x10];
    Arg0_38 *f38;
};
extern void call_8c3bdf60(void *, void *);
extern int operation_8c065330(void);
extern void operation_8c067c1c(void *, int, int);
void operation_8c078ab0(Object *o)
{
    int t1;
    call_8c3bdf60((void *)(((char *)o + 0x20)), (void *)(((char *)o + 0x2c)));
    if (-10.0f > o->f24) {
        o->f04 |= 1;
        return;
    }
    if (30.0f > o->f24) {
        t1 = operation_8c065330();
        operation_8c067c1c((void *)t1, (int)(((char *)o + 0x20)), (int)(o->f38));
    }
}
