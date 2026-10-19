typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_44 S_g8c467180_44;
typedef struct S_g8c467180_44_20 S_g8c467180_44_20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    Arg0_28 *f28;
};
struct S_g8c467180 {
    char unknown0[0x44];
    S_g8c467180_44 *f44;
};
struct S_g8c467180_44 {
    char unknown0[0x20];
    S_g8c467180_44_20 *f20;
};
struct Arg0_28 {
    char unknown0[0x5c];
    float f5c;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern void operation_8c1cc690(void);
extern int pair_grid_view_ready(void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c1afdb4(int, Object *, void *, void *, float);
extern int operation_8c01d8a8(void *, int);
extern void call_8c119c78(Arg0_28 *);
extern void request_resource_release(void *);
extern void operation_8c232414(Object *);
void operation_8c2321ec(Object *o)
{
    char *v65;
    int v6;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    operation_8c1cc690();
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            goto L_8c232284;
        }
        if (o->f20 == 2) {
            goto L_8c2322b2;
        }
        return;
    }
    v65 = (char *)o->f28;
    if (v65 != 0) {
        t1 = pair_grid_view_ready((void *)v65);
        if (t1 != 0) {
            o->f20 = 1;
            t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xe4);
            if (t2 == 0) {
                return;
            }
            call_8c1afdb4(t2, o, (void *)((*(S_g8c467180 **)0x8c467180)->f44->f20), (void *)((void *)0x8c338c38), -1.0f / (o->f28->f5c + 0.1495f));
            return;
        }
        t3 = pair_grid_view_ready((void *)(o->f28));
        if (t3 == 0) {
            if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
                t4 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
                if (t4 == 0) {
                    return;
                }
            }
            call_8c119c78((Arg0_28 *)(o->f28));
            return;
L_8c232284:;
            if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
                t5 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
                if (t5 == 0) {
                    return;
                }
            }
            if (o->f28 != 0) {
                request_resource_release((void *)(o->f28));
                o->f28 = (Arg0_28 *)0;
            }
            o->f20 = 2;
            return;
L_8c2322b2:;
            v6 = (int)o->f24;
            o->f24 = v6 + 1;
            if ((float)v6 > 4.5f) {
                operation_8c232414(o);
            }
        }
    }
}
