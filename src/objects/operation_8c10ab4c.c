typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
};
extern int operation_8c220ce0(void);
extern int call_8c106760(Object *);
extern int call_8c106798(Object *);
extern int classify_overflow_8c027844(void *);
extern int try_setting_8c02c8a0(void *);
void operation_8c10ab4c(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = operation_8c220ce0();
    if (t1 != 0) {
        t2 = call_8c106760(o);
        if (t2 == 0) {
            t3 = call_8c106798(o);
            if (t3 == 0) {
                return;
            }
        }
        t4 = classify_overflow_8c027844((void *)(o->f28));
        if (t4 == 0) {
            t5 = try_setting_8c02c8a0((void *)(o->f28));
            if (t5 != 1) {
                goto L_8c10ab8a;
            }
        }
        o->f24 = 7;
        return;
L_8c10ab8a:;
        o->f24 = 6;
    }
}
