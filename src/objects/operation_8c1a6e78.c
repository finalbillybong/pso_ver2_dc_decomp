typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_58 Arg0_58;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    char unknown34[0x24];
    Arg0_58 *f58;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x4];
};
extern int operation_8c1571f4(void *);
extern int operation_8c1cdc80(void *);
extern int call_8c15b448(int, Frame *);
extern int operation_8c1ccb10(void *);
extern void operation_8c1c74a8(void *, int);
extern int item_capacity_8c022f5c(void *, void *);
extern void call_8c220b80(int, int);
extern void call_8c023bb4(void *, Frame *);
extern void call_8c15b5e4(int, void *);
extern void call_8c15b9d0(void);
extern void operation_8c15b2e0(void);
extern void request_resource_release(void *);
void operation_8c1a6e78(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    if (o->f30 != 0 && ((o->f30->f80 & 0xffff & 2)) != 0) {
        t1 = operation_8c1571f4((void *)(o->f30));
        if (t1 == 0) {
            t2 = operation_8c1cdc80((void *)(o->f2c));
            t3 = call_8c15b448(t2, (Frame *)((&frame)));
            if (t3 != 0) {
                (&frame)->f0c = -1;
                t4 = operation_8c1ccb10((void *)(&frame));
                if (t4 != 0) {
                    operation_8c1c74a8((void *)(&frame), (int)(o->f58));
                }
                t5 = item_capacity_8c022f5c((void *)(o->f28), (void *)(&frame));
                if (t5 == 0) {
                    call_8c220b80(0x4a, 1);
                    o->f24 = 6;
                } else {
                    call_8c023bb4((void *)(o->f28), (Frame *)((&frame)));
                    call_8c15b5e4(t2, (void *)(o->f58));
                    call_8c15b9d0();
                    operation_8c15b2e0();
                    o->f24 = 0;
                }
            }
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
            return;
        }
        if (t1 == 1) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
            o->f24 = 4;
            return;
        }
    }
    if (o->f30 != 0 && ((o->f30->f80 & 0xffff & 4)) != 0) {
        request_resource_release((void *)(o->f30));
        o->f30 = (Arg0_30 *)0;
        o->f24 = 4;
    }
}
