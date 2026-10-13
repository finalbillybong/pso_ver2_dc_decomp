typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    int f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
};
extern void operation_8c22c190(void *);
extern int call_8c34d43c(int, void *);
extern int call_8c34d9b8(void *);
extern void call_8c34d6ae(void *, int, void *);
int operation_8c22c100(Object *o, int a1)
{
    int t1;
    int t2;
    if (a1 >= 0 && 0x115 > a1 && o->f20 != 0) {
        if (a1 == (int)(o->f28)) {
            return 1;
        }
        operation_8c22c190((void *)o);
        o->f28 = (Arg0_28 *)a1;
        t1 = call_8c34d43c(0xb8, (void *)(o->f28));
        o->f2c = (Arg0_2c *)t1;
        if (o->f2c == 0) {
            operation_8c22c190((void *)o);
            return 0;
        }
        o->f24 = 1;
        t2 = call_8c34d9b8((void *)(o->f2c));
        if (!(t2 >= 0)) {
            operation_8c22c190((void *)o);
            return 0;
        }
        call_8c34d6ae((void *)(o->f2c), t2, (void *)(o->f20));
        return 1;
    }
    return 0;
}
