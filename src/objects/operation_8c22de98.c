typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_44 S_g8c467180_44;
typedef struct S_g8c467180_44_0 S_g8c467180_44_0;
typedef struct Object Object;
typedef struct Arg0_84 Arg0_84;
typedef struct Arg0_88 Arg0_88;
typedef struct S_vv201 S_vv201;
typedef struct S_vv201_90 S_vv201_90;
typedef struct S_vv202 S_vv202;
typedef struct S_vv202_90 S_vv202_90;
struct Object {
    char unknown0[0x84];
    Arg0_84 *f84;
    Arg0_88 *f88;
    char unknown8c[0x8];
    int f94;
};
struct Arg0_88 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv201 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    S_vv201_90 *f90;
};
struct S_g8c467180 {
    char unknown0[0x44];
    S_g8c467180_44 *f44;
};
struct S_g8c467180_44 {
    S_g8c467180_44_0 *f00;
};
struct S_vv202 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    S_vv202_90 *f90;
};
extern int operation_8c1571f4(void *);
extern void request_resource_release(void *);
extern void operation_8c19a044(void *, int);
extern void clear_global_8c22fff0(void);
extern void call_8c22e8e4(Object *, void *, int);
void operation_8c22de98(Object *o)
{
    S_vv201 *v201;
    S_vv202 *v202;
    int t1;
    if (o->f88 != 0) {
        if (((o->f88->f80 & 0xffff & 2)) != 0) {
            t1 = operation_8c1571f4((void *)(o->f88));
            if (t1 == 0) {
                if (o->f88 != 0) {
                    request_resource_release((void *)(o->f88));
                    o->f88 = (Arg0_88 *)0;
                }
                o->f94 = 7;
                return;
            }
            if (t1 == 1) {
                if (o->f88 != 0) {
                    request_resource_release((void *)(o->f88));
                    o->f88 = (Arg0_88 *)0;
                }
                v201 = (S_vv201 *)o->f84;
                if (v201 != 0) {
                    v201->f80 = (v201->f80 & 0xffff) & -3;
                    if (v201->f90 != 0) {
                        operation_8c19a044((void *)(v201->f90), 1);
                    }
                }
                clear_global_8c22fff0();
                call_8c22e8e4(o, (void *)((*(S_g8c467180 **)0x8c467180)->f44->f00), 1);
                o->f94 = 4;
                return;
            }
        }
        if (((o->f88->f80 & 0xffff & 4)) != 0) {
            if (o->f88 != 0) {
                request_resource_release((void *)(o->f88));
                o->f88 = (Arg0_88 *)0;
            }
            v202 = (S_vv202 *)o->f84;
            if (v202 != 0) {
                v202->f80 = (v202->f80 & 0xffff) & -3;
                if (v202->f90 != 0) {
                    operation_8c19a044((void *)(v202->f90), 1);
                }
            }
            clear_global_8c22fff0();
            call_8c22e8e4(o, (void *)((*(S_g8c467180 **)0x8c467180)->f44->f00), 1);
            o->f94 = 4;
        }
    }
}
