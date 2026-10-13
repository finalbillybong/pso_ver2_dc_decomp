typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    int f24;
    int f28;
    int f2c;
};
extern char g_8c340638[];
extern void operation_8c25eb44(void);
extern int operation_8c248434(void);
extern void call_8c1005bc(void *);
extern void operation_8c25ec50(Object *);
extern void call_8c25ed88(Object *);
extern void call_8c25ee08(Object *);
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c25eb84(Object *);
extern void operation_8c25ebe0(Object *);
extern void call_8c25ecd4(Object *);
void operation_8c25ea10(Object *o)
{
    int t1;
    operation_8c25eb44();
    t1 = operation_8c248434();
    if (t1 != 0) {
        if (t1 == 1) {
            goto L_8c25ea50;
        }
    } else {
        call_8c1005bc((void *)((g_8c340638 + 0x13)));
        operation_8c25ec50(o);
        call_8c25ed88(o);
        call_8c25ee08(o);
        o->f04 |= 1;
        return;
L_8c25ea50:;
        call_8c05fbf8(0x50012, 0, 0, 0);
        operation_8c25ec50(o);
        operation_8c25eb84(o);
        call_8c25ee08(o);
        call_8c25ed88(o);
        o->f2c = 0x1e;
        o->f20 = 4;
        return;
    }
    if (o->f24 != 0 && o->f28 == 0) {
        operation_8c25ec50(o);
        operation_8c25ebe0(o);
        call_8c25ee08(o);
        call_8c25ecd4(o);
        o->f20 = 2;
    }
}
