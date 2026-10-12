typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0xc];
    int f34;
    char unknown38[0x4];
    Arg0_3c *f3c;
};
extern int hierarchy_is_active(void *);
extern int call_8c220ce0(void);
extern int call_8c106760(Object *);
extern int call_8c106798(Object *);
extern void call_8c220c40(int, int);
void operation_8c2088d8(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    if (o->f3c != 0) {
        t1 = hierarchy_is_active(o->f3c);
        if (t1 == 1) {
            return;
        }
        o->f3c = (Arg0_3c *)0;
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
        o->f34 = 1;
        o->f24 = 0xc;
    }
}
