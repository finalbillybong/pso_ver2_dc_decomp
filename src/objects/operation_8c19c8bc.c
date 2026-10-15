typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_2c_e8 Arg0_2c_e8;
typedef struct Arg0_37c Arg0_37c;
typedef struct Arg0_388 Arg0_388;
typedef struct Arg0_38c Arg0_38c;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    char unknown2c[0x350];
    Arg0_37c *f37c;
    char unknown380[0x8];
    Arg0_388 *f388;
    Arg0_38c *f38c;
};
struct Arg0_38c {
    char unknown0[0x80];
    unsigned short f80;
};
struct Arg0_2c {
    char unknown0[0xe8];
    Arg0_2c_e8 *fe8;
};
extern int operation_8c1571f4(void *);
extern int operation_8c1cdc80(void *);
extern int call_8c15b334(int, void *);
extern void call_8c023b3c(void *, void *, void *);
extern void operation_8c15b2e0(void);
extern void call_8c05fbf8(int, int, int, int);
extern void request_resource_release(void *);
extern void call_8c220b80(int, int);
void operation_8c19c8bc(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    if (o->f38c != 0 && ((o->f38c->f80 & 0xffff & 2)) != 0) {
        t1 = operation_8c1571f4((void *)(o->f38c));
        if (t1 == 0) {
            t3 = operation_8c1cdc80((void *)(o->f388));
            v1 = (int)(t3 * 0x1c);
            t2 = call_8c15b334((int)((int)o + v1 + 0x30), (void *)(o->f37c));
            if (t2 != 0) {
                call_8c023b3c((void *)(o->f28), (void *)((*(Arg0_2c **)((char *)((char *)o + 0x2c) + (v1)))->fe8), (void *)(o->f37c));
                operation_8c15b2e0();
                call_8c05fbf8(0x50001, 0, 0, 0);
                request_resource_release((void *)(o->f38c));
                o->f38c = (Arg0_38c *)0;
                o->f24 = 0;
                return;
            }
            call_8c220b80(0x3b, 1);
            call_8c05fbf8(0x50006, 0, 0, 0);
            request_resource_release((void *)(o->f38c));
            o->f38c = (Arg0_38c *)0;
            o->f24 = 7;
            return;
        }
        if (t1 == 1) {
            request_resource_release((void *)(o->f38c));
            o->f38c = (Arg0_38c *)0;
            o->f24 = 3;
            return;
        }
    }
    if (o->f38c != 0 && ((o->f38c->f80 & 0xffff & 4)) != 0) {
        request_resource_release((void *)(o->f38c));
        o->f38c = (Arg0_38c *)0;
        o->f24 = 3;
    }
}
