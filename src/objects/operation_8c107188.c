typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_2c_e8 Arg0_2c_e8;
typedef struct Arg0_380 Arg0_380;
typedef struct Arg0_390 Arg0_390;
typedef struct Arg0_394 Arg0_394;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    char unknown2c[0x354];
    Arg0_380 *f380;
    int f384;
    char unknown388[0x8];
    Arg0_390 *f390;
    Arg0_394 *f394;
};
struct Arg0_394 {
    char unknown0[0x80];
    unsigned short f80;
};
struct Arg0_2c {
    char unknown0[0xe8];
    Arg0_2c_e8 *fe8;
};
extern int operation_8c1571f4(void *);
extern int operation_8c1cdc80(void *);
extern int call_8c023a9c(void *, void *, int, void *);
extern void request_resource_release(void *);
extern void call_8c220b80(int, int);
void operation_8c107188(Object *o)
{
    int t1;
    int t2;
    int t3;
    if (o->f394 != 0 && ((o->f394->f80 & 0xffff & 2)) != 0) {
        t1 = operation_8c1571f4((void *)(o->f394));
        if (t1 == 0) {
            t2 = operation_8c1cdc80((void *)(o->f390));
            t3 = call_8c023a9c((void *)(o->f28), (void *)((*(Arg0_2c **)((char *)((char *)o + 0x2c) + (t2 * 0x1c)))->fe8), (int)(*(int *)((char *)((char *)o + 0x40) + (t2 * 0x1c)) * (int)(o->f380)), (void *)(o->f380));
            if (t3 != 0) {
                request_resource_release((void *)(o->f394));
                o->f394 = (Arg0_394 *)0;
                o->f384 = (int)(t2);
                o->f24 = 0;
                return;
            }
            call_8c220b80(0x1b, 1);
            request_resource_release((void *)(o->f394));
            o->f394 = (Arg0_394 *)0;
            o->f24 = 4;
            return;
        }
        if (t1 == 1) {
            request_resource_release((void *)(o->f394));
            o->f394 = (Arg0_394 *)0;
            o->f24 = 5;
            return;
        }
    }
    if (o->f394 != 0 && ((o->f394->f80 & 0xffff & 4)) != 0) {
        request_resource_release((void *)(o->f394));
        o->f394 = (Arg0_394 *)0;
        o->f24 = 5;
    }
}
