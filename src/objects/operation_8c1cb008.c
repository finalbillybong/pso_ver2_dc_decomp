typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_38 Arg0_38;
typedef struct S_vv61 S_vv61;
struct Object {
    char unknown0[0x28];
    char f28;
    char f29;
    char unknown2a[0x2];
    Arg0_2c *f2c;
    Arg0_30 *f30;
    char unknown34[0x4];
    Arg0_38 *f38;
};
struct S_vv61 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int operation_8c1571f4(void *);
extern void request_resource_release(void *);
extern void clear_global_8c19b29c(void);
extern int operation_8c19b054(void);
extern int call_8c372d38(int, void *);
void operation_8c1cb008(Object *o)
{
    S_vv61 *v61;
    int t1;
    int t2;
    int t3;
    v61 = (S_vv61 *)o->f38;
    if (((v61->f80 & 0xffff & 2)) != 0) {
        t1 = operation_8c1571f4((void *)v61);
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
            o->f38 = (Arg0_38 *)0;
        }
        if (t1 != 0) {
            if (t1 == 1) {
                goto L_8c1cb076;
            }
            goto L_8c1cb0b8;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
        }
        o->f29 = 7;
        o->f28 = 6;
        return;
L_8c1cb076:;
        clear_global_8c19b29c();
        o->f28 = 0;
    } else {
        if (((v61->f80 & 0xffff & 4)) != 0) {
            if (o->f30 != 0) {
                request_resource_release((void *)(o->f30));
                o->f30 = (Arg0_30 *)0;
            }
            if (o->f38 != 0) {
                request_resource_release((void *)(o->f38));
                o->f38 = (Arg0_38 *)0;
            }
            clear_global_8c19b29c();
            o->f28 = 0;
        }
    }
L_8c1cb0b8:;
    t2 = operation_8c19b054();
    t3 = call_8c372d38((int)((char)t2), (void *)((void *)0x8c319870));
    if (t3 != 0) {
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
            o->f38 = (Arg0_38 *)0;
        }
        clear_global_8c19b29c();
        o->f28 = 0;
    }
}
