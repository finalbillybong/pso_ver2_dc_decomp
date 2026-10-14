typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_194 Arg0_194;
typedef struct Arg0_198 Arg0_198;
typedef struct Arg0_e8 Arg0_e8;
struct Object {
    char unknown0[0xe4];
    float fe4;
    Arg0_e8 *fe8;
    char unknownec[0x14];
    int f100;
    int f104;
    char unknown108[0x4];
    short f10c;
    char unknown10e[0x2];
    short f110;
    char unknown112[0x7a];
    int f18c;
    char unknown190[0x4];
    Arg0_194 *f194;
    Arg0_198 *f198;
    char unknown19c[0x4];
    int f1a0;
    int f1a4;
};
struct Arg0_198 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int call_8c1e8dc8(Object *);
extern int find_local_actor_in_radius(void *, float);
extern void call_8c1e7e94(Object *);
extern void operation_8c1e8b30(void *, int);
extern void request_resource_release(void *);
extern int operation_8c1571f4(void *);
extern void call_8c1e8ba8(Object *, int);
extern int call_8c01c25c(void);
extern int call_8c0c349c(void);
extern int call_8c1e8d18(Object *);
extern void clear_overlay_elements(void *);
extern void operation_8c1e8b78(int, int);
void operation_8c1e83fc(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    if (o->f18c == 1) {
        o->f10c = 3;
        return;
    }
    switch (o->f110) {
    case 0:
        o->f1a0 = 0;
        o->f1a4 = 0;
        o->f110 = 1;
        o->f100 = (int)(*(int *)0x8c4e3148);
        o->f104 = (int)(*(int *)0x8c4e3150);
        return;
    case 1:
        t1 = call_8c1e8dc8(o);
        if (t1 == 0) {
            t2 = find_local_actor_in_radius((void *)o, o->fe4);
            if (t2 != 0) {
                call_8c1e7e94(o);
                operation_8c1e8b30((void *)o, (int)(*(S_g8c418248 **)0x8c418248));
                o->f110 = 2;
                return;
            }
        }
        if (o->fe8 != 0) {
            request_resource_release((void *)(o->fe8));
            o->fe8 = (Arg0_e8 *)0;
        }
        if (o->f194 == 0) {
            return;
        }
        request_resource_release((void *)(o->f194));
        o->f194 = (Arg0_194 *)0;
        return;
    case 2:
        call_8c1e7e94(o);
        if (o->f198 != 0) {
            if (((o->f198->f80 & 0xffff & 4)) != 0) {
                o->f110 = 3;
            } else {
                if (((o->f198->f80 & 0xffff & 2)) != 0) {
                    t3 = operation_8c1571f4((void *)(o->f198));
                    if (t3 == 0) {
                        operation_8c1e8b30((void *)o, (int)(*(S_g8c418248 **)0x8c418248));
                        o->f1a0 = 1;
                        call_8c1e8ba8(o, 1);
                        o->f110 = 5;
                    } else {
                        if (t3 == 1) {
                            o->f110 = 3;
                        }
                    }
                }
            }
        }
        t4 = call_8c1e8dc8(o);
        if (t4 != 0) {
            o->f110 = 3;
        }
        if (*(int *)0x8c2fff78 != 0) {
            t5 = call_8c01c25c();
            if (t5 == 0x10) {
                t6 = call_8c0c349c();
                if (t6 != 0) {
                    t7 = call_8c1e8d18(o);
                    if (t7 != 0) {
                        call_8c1e8ba8(o, 2);
                        o->f110 = 5;
                    }
                }
            }
        }
        if (o->f110 == 2) {
            return;
        }
        clear_overlay_elements((void *)o);
        return;
    case 3:
        operation_8c1e8b78((int)o, (int)(*(S_g8c418248 **)0x8c418248));
        o->f110 = 4;
        return;
    case 4:
        t8 = find_local_actor_in_radius((void *)o, o->fe4);
        if (t8 == 0) {
            o->f110 = 1;
            return;
        }
        if (*(int *)0x8c2fff78 == 0) {
            return;
        }
        t9 = call_8c01c25c();
        if (t9 != 0x10) {
            return;
        }
        t10 = call_8c0c349c();
        if (t10 == 0) {
            return;
        }
        t11 = call_8c1e8d18(o);
        if (t11 == 0) {
            return;
        }
        call_8c1e8ba8(o, 2);
        o->f110 = 5;
        return;
    case -1:
        clear_overlay_elements((void *)o);
        return;
    case 5:
        break;
    }
}
