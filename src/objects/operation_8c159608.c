typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x10];
    Arg0_38 *f38;
    int f3c;
};
extern int hierarchy_is_active(void *);
extern int call_8c220ce0(void);
extern int call_8c106760(Object *);
extern int call_8c106798(Object *);
extern void call_8c220c40(int, int);
void operation_8c159608(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    if (o->f38 != 0) {
        t1 = hierarchy_is_active(o->f38);
        if (t1 == 1) {
            return;
        }
        o->f38 = (Arg0_38 *)0;
    }
    t2 = call_8c220ce0();
    if (t2 != 0) {
        t3 = call_8c106760(o);
        if (t3 == 0) {
            t4 = call_8c106798(o);
            if (t4 == 0) {
                return;
            }
        }
        call_8c220c40(0xc, 1);
        o->f3c = 1;
        o->f24 = 5;
    }
}
