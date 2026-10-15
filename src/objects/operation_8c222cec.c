typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_22b8 Arg0_22b8;
typedef struct Arg0_22bc Arg0_22bc;
typedef struct Arg0_22c4 Arg0_22c4;
typedef struct S_vv181 S_vv181;
typedef struct S_vv181_90 S_vv181_90;
typedef struct S_vv182 S_vv182;
typedef struct S_vv182_90 S_vv182_90;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x2290];
    Arg0_22b8 *f22b8;
    Arg0_22bc *f22bc;
    char unknown22c0[0x4];
    Arg0_22c4 *f22c4;
    int f22c8;
};
struct Arg0_22bc {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv181 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    S_vv181_90 *f90;
};
struct S_vv182 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    S_vv182_90 *f90;
};
extern int g_8c506060;
extern int g_8c506064;
extern int operation_8c1571f4(void *);
extern void request_resource_release(void *);
extern void operation_8c19a044(void *, int);
extern void call_8c220c40(int, int);
extern void operation_8c223228(void *);
void operation_8c222cec(Object *o)
{
    S_vv181 *v181;
    S_vv182 *v182;
    int t1;
    if (o->f22bc == 0) {
        return;
    }
    if (((o->f22bc->f80 & 0xffff & 2)) != 0) {
        t1 = operation_8c1571f4((void *)(o->f22bc));
        if (t1 != 0) {
            if (t1 == 1) {
                goto L_8c222d34;
            }
        } else {
            request_resource_release((void *)(o->f22bc));
            o->f22bc = (Arg0_22bc *)0;
            o->f24 = 0xb;
            return;
L_8c222d34:;
            request_resource_release((void *)(o->f22bc));
            o->f22bc = (Arg0_22bc *)0;
            if (o->f22c4 != 0) {
                request_resource_release((void *)(o->f22c4));
                o->f22c4 = (Arg0_22c4 *)0;
            }
            v181 = (S_vv181 *)o->f22b8;
            if (v181 != 0) {
                v181->f80 = (v181->f80 & 0xffff) & -3;
                if (v181->f90 != 0) {
                    operation_8c19a044((void *)(v181->f90), 1);
                }
            }
            g_8c506060 = (int)(o->f22c8);
            g_8c506064 = 0x40000;
            call_8c220c40(0x19, 1);
            operation_8c223228((void *)o);
            o->f24 = 5;
            return;
        }
    }
    if (((o->f22bc->f80 & 0xffff & 4)) != 0) {
        request_resource_release((void *)(o->f22bc));
        o->f22bc = (Arg0_22bc *)0;
        if (o->f22c4 != 0) {
            request_resource_release((void *)(o->f22c4));
            o->f22c4 = (Arg0_22c4 *)0;
        }
        v182 = (S_vv182 *)o->f22b8;
        if (v182 != 0) {
            v182->f80 = (v182->f80 & 0xffff) & -3;
            if (v182->f90 != 0) {
                operation_8c19a044((void *)(v182->f90), 1);
            }
        }
        g_8c506060 = (int)(o->f22c8);
        g_8c506064 = 0x40000;
        call_8c220c40(0x19, 1);
        operation_8c223228((void *)o);
        o->f24 = 5;
    }
}
