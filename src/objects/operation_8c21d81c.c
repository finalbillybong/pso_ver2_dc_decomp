typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct Object Object;
typedef struct Arg0_44 Arg0_44;
typedef struct Arg0_48 Arg0_48;
typedef struct Arg0_4c Arg0_4c;
typedef struct Arg0_50 Arg0_50;
typedef struct S_vv1 S_vv1;
typedef struct S_vv13 S_vv13;
typedef struct S_vv13_98 S_vv13_98;
typedef struct S_vv2 S_vv2;
typedef struct S_vv214 S_vv214;
typedef struct S_vv214_90 S_vv214_90;
typedef struct S_vv215 S_vv215;
typedef struct S_vv215_90 S_vv215_90;
typedef struct S_vv5 S_vv5;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x18];
    Arg0_44 *f44;
    Arg0_48 *f48;
    Arg0_4c *f4c;
    Arg0_50 *f50;
    char unknown54[0x20];
    int f74;
};
struct Arg0_50 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_vv2 {
    char unknown0[0x4];
    short f04;
};
struct S_vv5 {
    char unknown0[0x4];
    short f04;
};
struct S_vv9 {
    char unknown0[0x4];
    short f04;
};
struct S_vv13 {
    char unknown0[0x98];
    S_vv13_98 *f98;
};
struct S_vv214 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    S_vv214_90 *f90;
};
struct S_vv215 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    S_vv215_90 *f90;
};
extern char g_8c3366bc[];
extern int operation_8c1571f4(void *);
extern int call_8c250918(void);
extern void call_8c220c40(int, int);
extern void call_8c02eb7c(void *, void *, int, void *, void *);
extern void operation_8c19a044(void *, int);
extern void request_resource_release(void *);
extern void release_resources_8c21db58(void *);
void operation_8c21d81c(Object *o)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv5 *v5;
    S_vv9 *v9;
    S_vv13 *v13;
    S_vv214 *v214;
    S_vv215 *v215;
    int t1;
    int t2;
    if (o->f50 == 0) {
    } else {
        if (((o->f50->f80 & 0xffff & 2)) == 0) {
        } else {
            t1 = operation_8c1571f4((void *)(o->f50));
            if (t1 == 0) {
                t2 = call_8c250918();
                if (t2 == 1) {
                    call_8c220c40(0x14, 1);
                    call_8c02eb7c((void *)(*(S_g8c418a00 **)0x8c418a00), (void *)(((char *)o + 0x58)), 0, (void *)((g_8c3366bc + 0x11)), (void *)((g_8c3366bc + 0x11)));
                    v1 = (S_vv1 *)o->f50;
                    v1->f04 |= 1;
                    o->f50 = (Arg0_50 *)0;
                    if (o->f4c != 0) {
                        v2 = (S_vv2 *)o->f4c;
                        v2->f04 |= 1;
                        o->f4c = (Arg0_4c *)0;
                    }
                    if (o->f48 != 0) {
                        v5 = (S_vv5 *)o->f48;
                        v5->f04 |= 1;
                        o->f48 = (Arg0_48 *)0;
                    }
                    if (o->f44 != 0) {
                        v9 = (S_vv9 *)o->f44;
                        v9->f04 |= 1;
                        o->f44 = (Arg0_44 *)0;
                    }
                    o->f28 = 0xc;
                    return;
                }
                call_8c220c40(0x10, 1);
                v13 = (S_vv13 *)o->f50;
                o->f50->f80 = (o->f50->f80 & 0xffff) & -3;
                if (v13->f98 == 0) {
                    return;
                }
                operation_8c19a044((void *)(v13->f98), 1);
                return;
            }
            if (t1 == 1) {
                request_resource_release((void *)(o->f50));
                o->f50 = (Arg0_50 *)0;
                if (o->f4c != 0) {
                    request_resource_release((void *)(o->f4c));
                    o->f4c = (Arg0_4c *)0;
                }
                v214 = (S_vv214 *)o->f44;
                if (v214 != 0) {
                    v214->f80 = (v214->f80 & 0xffff) & -3;
                    if (v214->f90 != 0) {
                        operation_8c19a044((void *)(v214->f90), 1);
                    }
                }
                o->f74 -= 1;
                release_resources_8c21db58((void *)o);
                call_8c220c40(0x19, 1);
                o->f28 = 1;
                return;
            }
        }
    }
    if (o->f50 != 0 && ((o->f50->f80 & 0xffff & 4)) != 0) {
        request_resource_release((void *)(o->f50));
        o->f50 = (Arg0_50 *)0;
        if (o->f4c != 0) {
            request_resource_release((void *)(o->f4c));
            o->f4c = (Arg0_4c *)0;
        }
        v215 = (S_vv215 *)o->f44;
        if (v215 != 0) {
            v215->f80 = (v215->f80 & 0xffff) & -3;
            if (v215->f90 != 0) {
                operation_8c19a044((void *)(v215->f90), 1);
            }
        }
        o->f74 -= 1;
        release_resources_8c21db58((void *)o);
        call_8c220c40(0x19, 1);
        o->f28 = 1;
    }
}
