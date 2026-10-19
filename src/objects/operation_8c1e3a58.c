typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c051d18 S_c8c051d18;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct S_vv10 S_vv10;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    int f34;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_c8c051d18 {
    char f00;
};
struct S_vv5 {
    char unknown0[0x4];
    short f04;
};
struct S_vv10 {
    char unknown0[0x4];
    short f04;
};
extern char g_8c41cba0[];
extern void operation_8c1cc690(void);
extern int pair_grid_view_ready(void *);
extern int call_8c1e3d6c(Object *);
extern int allocate_block(void *, unsigned int);
extern void operation_8c051a98(void *, int, int, int, unsigned char);
extern void operation_8c051d5c(void *, float, float);
extern int operation_8c01d8a8(void *, int);
extern void call_8c119c78(void *);
extern int operation_8c051cf0(void *);
extern S_c8c051d18 *operation_8c051d18(void *);
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c051ce4(void *);
extern void call_8c18de08(S_c8c051d18 *);
extern void call_8c12b880(void *, int, int);
extern void call_8c12b154(void *, S_c8c051d18 *, int);
extern void request_resource_release(void *);
extern void select_mode12_8c1cc5b8(void);
extern void select_mode4_8c1cc4f8(void);
void operation_8c1e3a58(Object *o)
{
    S_vv5 *v5;
    S_vv10 *v10;
    int v11;
    float v14;
    int v15;
    float v18;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    S_c8c051d18 *t7;
    operation_8c1cc690();
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            goto L_8c1e3b0a;
        }
        if (o->f20 == 2) {
            goto L_8c1e3bbe;
        }
        if (o->f20 == 3) {
            goto L_8c1e3bee;
        }
        return;
    }
    if (o->f28 == 0) {
        return;
    }
    t1 = pair_grid_view_ready((void *)(o->f28));
    if (t1 != 0) {
        t2 = call_8c1e3d6c(o);
        o->f2c = (Arg0_2c *)t2;
        t3 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
        if (t3 != 0) {
            operation_8c051a98((void *)t3, (int)o, 0x10, 0, (unsigned char)0);
        }
        o->f30 = (Arg0_30 *)t3;
        operation_8c051d5c((void *)(o->f30), 800.0f, 600.0f);
        o->f20 = 1;
        return;
    }
    t4 = pair_grid_view_ready((void *)(o->f28));
    switch (t4) {
    case 0:
        if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
            t5 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
            if (t5 == 0) {
                return;
            }
        }
        call_8c119c78((void *)(o->f28));
        return;
L_8c1e3b0a:;
        t6 = operation_8c051cf0((void *)(o->f30));
        if (t6 != 0) {
            t7 = operation_8c051d18((void *)(o->f30));
            if (t7->f00 == 0) {
                call_8c05fbf8(0x50006, 0, 0, 0);
                operation_8c051ce4((void *)(o->f30));
                call_8c18de08(t7);
            } else {
                call_8c12b880((void *)((void *)0x8c4621e9), 0, 0x11);
                call_8c12b154((void *)((void *)0x8c4621e9), t7, 0x10);
                call_8c18de08(t7);
                v5 = (S_vv5 *)o->f30;
                v5->f04 |= 1;
                o->f30 = (Arg0_30 *)0;
                request_resource_release((void *)(o->f28));
                o->f28 = (Arg0_28 *)0;
                request_resource_release((void *)(o->f2c));
                o->f2c = (Arg0_2c *)0;
                o->f20 = 2;
            }
        }
        if (o->f34 == 0) {
            if (((*(int *)(g_8c41cba0 + 0x28) & 2)) != 0) {
                call_8c12b880((void *)((void *)0x8c4621e9), 0, 0x11);
                v10 = (S_vv10 *)o->f30;
                v10->f04 |= 1;
                o->f30 = (Arg0_30 *)0;
                request_resource_release((void *)(o->f28));
                o->f28 = (Arg0_28 *)0;
                request_resource_release((void *)(o->f2c));
                o->f2c = (Arg0_2c *)0;
                o->f20 = 3;
                return;
L_8c1e3bbe:;
                v11 = (int)o->f24;
                o->f24 = v11 + 1;
                v14 = (float)(float)v11;
                if (0.0f > (float)v11) {
                    v14 = (float)((float)v11 + 4294967296.0f);
                }
                if (v14 > 4.5f) {
                    *(char *)0x8c5108e0 = 1;
                    select_mode12_8c1cc5b8();
                    return;
L_8c1e3bee:;
                    v15 = (int)o->f24;
                    o->f24 = v15 + 1;
                    v18 = (float)(float)v15;
                    if (0.0f > (float)v15) {
                        v18 = (float)((float)v15 + 4294967296.0f);
                    }
                    if (v18 > 4.5f) {
                        call_8c05fbf8(0x50016, 0, 0, 0);
                        select_mode4_8c1cc4f8();
                    }
                }
            }
        }
    }
}
