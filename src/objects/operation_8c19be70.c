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
    char unknown2c[0x124];
    int f150;
};
extern int operation_8c220ce0(void);
extern int operation_8c106760(Object *);
extern int operation_8c106798(Object *);
extern void call_8c023bb4(void *, void *);
extern void operation_8c220ca8(int, int);
void operation_8c19be70(Object *o)
{
    int t1;
    int t2;
    int t3;
    if (!(--o->f150 > 0)) {
        t1 = operation_8c220ce0();
        if (t1 != 0) {
            t2 = operation_8c106760(o);
            if (t2 == 0) {
                t3 = operation_8c106798(o);
                if (t3 == 0) {
                    return;
                }
            }
            call_8c023bb4((void *)(o->f28), (void *)(((char *)o + 0x40)));
            operation_8c220ca8(0xb, 1);
            o->f24 = 0;
        }
    }
}
