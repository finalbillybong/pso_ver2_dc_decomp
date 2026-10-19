typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_78_94 Arg0_78_94;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg0_7c_94 Arg0_7c_94;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x60];
    short f66;
    char unknown68[0x10];
    Arg0_78 *f78;
    Arg0_7c *f7c;
};
struct Arg0_7c {
    char unknown0[0x94];
    Arg0_7c_94 *f94;
};
struct Arg0_7c_94 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x5c0];
    unsigned short f5f8;
    char unknown5fa[0x5ca];
    int fbc4;
};
struct Arg0_78 {
    char unknown0[0x94];
    Arg0_78_94 *f94;
};
struct Arg0_78_94 {
    char unknown0[0x34];
    int f34;
};
extern int target_inactive_8c10ec8c(void *);
extern void operation_8c10dad8(void *);
extern void operation_8c110278(void *, int);
extern void call_8c110a74(Object *, int);
extern void operation_8c10db2c(void *);
extern void call_8c10dc04(Object *);
extern void operation_8c10c650(void *);
extern void operation_8c10cb04(void *);
extern void call_8c10d42c(Object *);
void operation_8c10c4f8(Object *o)
{
    int v1;
    int v4;
    int t1;
    int t2;
    if (o->f78 == 0 || o->f7c == 0) {
        return;
    }
    t1 = target_inactive_8c10ec8c((void *)(o->f78));
    if (t1 != 0) {
        o->f04 |= 1;
        return;
    }
    t2 = target_inactive_8c10ec8c((void *)(o->f7c));
    if (t2 != 0) {
        o->f04 |= 1;
        return;
    }
    v1 = (int)(o->f7c->f94->fbc4 == 0);
    if (v1 != 0) {
        if (o->f7c->f94 != 0 && (o->f7c->f94->f5f8 & 0xffff) == 0xffff) {
            return;
        }
        operation_8c10dad8((void *)o);
        if (((o->f78->f94->f34 & 0x800)) == 0) {
            if (((o->f7c->f94->f34 & 0x800)) != 0) {
                if (o->f66 >= 0x400) {
                    o->f66 = 0x400;
                    v4 = (int)1;
                } else {
                    v4 = (int)0;
                }
                if (v4 != 0) {
                    operation_8c110278((void *)o, 5);
                } else {
                    if (o->f66 >= 0) {
                        operation_8c110278((void *)o, 4);
                    }
                }
                o->f66 += 1;
                call_8c110a74(o, 0);
            } else {
                o->f66 = 0;
                operation_8c10db2c((void *)o);
                call_8c10dc04(o);
                operation_8c10c650((void *)o);
                operation_8c10cb04((void *)o);
            }
            call_8c10d42c(o);
        }
    }
}
