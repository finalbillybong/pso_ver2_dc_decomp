typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4e2b80 S_g8c4e2b80;
typedef struct S_g8c4e2b80_42c S_g8c4e2b80_42c;
typedef struct S_g8c4e2b80_430 S_g8c4e2b80_430;
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
struct S_g8c4e2b80 {
    char unknown0[0x42c];
    S_g8c4e2b80_42c *f42c;
    S_g8c4e2b80_430 *f430;
};
struct S_g8c4e2b80_42c {
    char unknown0[0x38];
    int f38;
};
struct S_g8c4e2b80_430 {
    char unknown0[0x3c];
    int f3c;
};
struct Arg0_198 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int find_local_actor_in_radius_8c25a9a4(void *, float);
extern void call_8c259ba0(Object *);
extern void operation_8c25a848(void *, int);
extern void request_resource_release(void *);
extern int operation_8c1571f4(void *);
extern void call_8c25a8c0(Object *, int);
extern int operation_8c01c25c(void);
extern int call_8c0c349c(void);
extern int no_owned_target_near_8c25aa04(void *);
extern void clear_overlay_elements_8c25a8e8(void *);
extern void operation_8c25a890(int, int);
void operation_8c25a0ec(Object *o)
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
    if (o->f18c == 1) {
        o->f10c = 3;
        return;
    }
    switch (o->f110) {
    case 0:
        o->f1a0 = 0;
        o->f1a4 = 0;
        o->f110 = 1;
        o->f100 = (int)((*(S_g8c4e2b80 **)0x8c4e2b80)->f42c->f38);
        o->f104 = (int)((*(S_g8c4e2b80 **)0x8c4e2b80)->f430->f3c);
        return;
    case 1:
        t1 = find_local_actor_in_radius_8c25a9a4((void *)o, o->fe4);
        if (t1 != 0) {
            call_8c259ba0(o);
            operation_8c25a848((void *)o, (int)(*(S_g8c418248 **)0x8c418248));
            o->f110 = 2;
            return;
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
        call_8c259ba0(o);
        if (o->f198 != 0) {
            if (((o->f198->f80 & 0xffff & 4)) != 0) {
                o->f110 = 3;
            } else {
                if (((o->f198->f80 & 0xffff & 2)) != 0) {
                    t2 = operation_8c1571f4((void *)(o->f198));
                    if (t2 == 0) {
                        operation_8c25a848((void *)o, (int)(*(S_g8c418248 **)0x8c418248));
                        o->f1a0 = 1;
                        call_8c25a8c0(o, 1);
                        o->f110 = 5;
                    } else {
                        if (t2 == 1) {
                            o->f110 = 3;
                        }
                    }
                }
            }
        }
        if (*(int *)0x8c2fff78 != 0) {
            t3 = operation_8c01c25c();
            if (t3 == 0x10) {
                t4 = call_8c0c349c();
                if (t4 != 0) {
                    t5 = no_owned_target_near_8c25aa04((void *)o);
                    if (t5 != 0) {
                        call_8c25a8c0(o, 2);
                        o->f110 = 5;
                    }
                }
            }
        }
        if (o->f110 == 2) {
            return;
        }
        clear_overlay_elements_8c25a8e8((void *)o);
        return;
    case 3:
        operation_8c25a890((int)o, (int)(*(S_g8c418248 **)0x8c418248));
        o->f110 = 4;
        return;
    case 4:
        t6 = find_local_actor_in_radius_8c25a9a4((void *)o, o->fe4);
        if (t6 == 0) {
            o->f110 = 1;
            return;
        }
        if (*(int *)0x8c2fff78 == 0) {
            return;
        }
        t7 = operation_8c01c25c();
        if (t7 != 0x10) {
            return;
        }
        t8 = call_8c0c349c();
        if (t8 == 0) {
            return;
        }
        t9 = no_owned_target_near_8c25aa04((void *)o);
        if (t9 == 0) {
            return;
        }
        call_8c25a8c0(o, 2);
        o->f110 = 5;
        return;
    case -1:
        clear_overlay_elements_8c25a8e8((void *)o);
        return;
    case 5:
        break;
    }
}
