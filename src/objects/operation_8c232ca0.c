typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0366dc S_c8c0366dc;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct S_vv10 S_vv10;
typedef struct S_vv10_98 S_vv10_98;
typedef struct S_vv16 S_vv16;
typedef struct S_vv16_98 S_vv16_98;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_98 S_vv3_98;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_98 S_vv6_98;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    int f30;
    int f34;
};
struct Arg0_28 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_c8c0366dc {
    char f00;
};
struct S_vv3 {
    char unknown0[0x98];
    S_vv3_98 *f98;
};
struct S_vv6 {
    char unknown0[0x98];
    S_vv6_98 *f98;
};
struct Arg0_2c {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv10 {
    char unknown0[0x98];
    S_vv10_98 *f98;
};
struct S_vv16 {
    char unknown0[0x98];
    S_vv16_98 *f98;
};
extern void operation_8c1cc690(void);
extern int operation_8c1571f4(void *);
extern S_c8c0366dc *operation_8c0366dc(int);
extern int call_8c036708(int);
extern void operation_8c0365a8(int);
extern void call_8c2330c0(Object *);
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c19a044(void *, int);
extern void operation_8c233170(void *);
extern void operation_8c199b14(void);
extern void operation_8c233190(void *);
extern void select_mode13_8c1cc5d0(void);
extern void select_mode4_8c1cc4f8(void);
void operation_8c232ca0(Object *o)
{
    S_vv3 *v3;
    S_vv6 *v6;
    S_vv10 *v10;
    S_vv16 *v16;
    int v19;
    int v20;
    int t1;
    S_c8c0366dc *t2;
    int t3;
    S_c8c0366dc *t4;
    int t5;
    int t6;
    operation_8c1cc690();
    switch (o->f20) {
    case 0:
        if (o->f28 != 0 && ((o->f28->f80 & 0xffff & 2)) != 0) {
            t1 = operation_8c1571f4((void *)(o->f28));
            o->f30 = (int)(t1);
            switch (o->f30) {
            case 1:
                t2 = operation_8c0366dc(0);
                if (t2->f00 != 0) {
                    t3 = call_8c036708(0);
                    if (t3 == 1) {
                        operation_8c0365a8(0);
                        o->f20 = 1;
                        call_8c2330c0(o);
                        return;
                    }
                }
                call_8c05fbf8(0x50006, 0, 0, 0);
                v3 = (S_vv3 *)o->f28;
                o->f28->f80 = (o->f28->f80 & 0xffff) & -3;
                if (v3->f98 == 0) {
                    return;
                }
                operation_8c19a044((void *)(v3->f98), 1);
                return;
            case 5:
                t4 = operation_8c0366dc(1);
                if (t4->f00 != 0) {
                    t5 = call_8c036708(1);
                    if (t5 == 1) {
                        operation_8c0365a8(1);
                        o->f20 = 1;
                        call_8c2330c0(o);
                        return;
                    }
                }
                call_8c05fbf8(0x50006, 0, 0, 0);
                v6 = (S_vv6 *)o->f28;
                o->f28->f80 = (o->f28->f80 & 0xffff) & -3;
                if (v6->f98 == 0) {
                    return;
                }
                operation_8c19a044((void *)(v6->f98), 1);
                return;
            }
        }
        if (o->f28 == 0 || ((o->f28->f80 & 0xffff & 4)) == 0) {
            break;
        }
        operation_8c233170((void *)o);
        operation_8c199b14();
        o->f20 = 3;
        o->f24 = 0;
        break;
    case 1:
        if (o->f2c != 0 && ((o->f2c->f80 & 0xffff & 2)) != 0) {
            o->f20 = 2;
            t6 = operation_8c1571f4((void *)(o->f2c));
            o->f34 = (int)(t6);
            switch (o->f34) {
            case 1:
                operation_8c233170((void *)o);
                operation_8c233190((void *)o);
                operation_8c199b14();
                o->f24 = 0;
                return;
            case 2:
                operation_8c233190((void *)o);
                v10 = (S_vv10 *)o->f28;
                o->f28->f80 = (o->f28->f80 & 0xffff) & -3;
                if (v10->f98 != 0) {
                    operation_8c19a044((void *)(v10->f98), 1);
                }
                o->f20 = 0;
                o->f24 = 0;
                return;
            }
        }
        if (o->f2c != 0 && ((o->f2c->f80 & 0xffff & 4)) != 0) {
            operation_8c233190((void *)o);
            v16 = (S_vv16 *)o->f28;
            o->f28->f80 = (o->f28->f80 & 0xffff) & -3;
            if (v16->f98 != 0) {
                operation_8c19a044((void *)(v16->f98), 1);
            }
            o->f20 = 0;
            o->f24 = 0;
        }
        break;
    case 2:
        v19 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v19);
        if ((float)v19 > 5.5f) {
            switch (o->f34) {
            case 1:
                select_mode13_8c1cc5d0();
                return;
            case 2:
                o->f20 = 0;
                o->f24 = 0;
                return;
            }
        }
        break;
    case 3:
        v20 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v20);
        if ((float)v20 > 5.5f) {
            select_mode4_8c1cc4f8();
        }
        break;
    }
}
