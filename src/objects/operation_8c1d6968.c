typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_10 Arg0_30_10;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct Arg0_30_8 Arg0_30_8;
typedef struct Arg0_30_c Arg0_30_c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x44];
    int f78;
    char unknown7c[0x30];
    Vector3 fac;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
    Arg0_30_4 *f04;
    Arg0_30_8 *f08;
    Arg0_30_c *f0c;
    Arg0_30_10 *f10;
};
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv3 {
    int f00;
};
struct S_vv4 {
    int f00;
};
struct S_vv5 {
    int f00;
};
extern Vector3 g_8c32a1a4;
extern Vector3 g_8c32a1b0;
extern Vector3 g_8c32a1bc;
extern Vector3 g_8c32a1c8;
extern S_g8c418248 *g_8c418248;
extern char g_8c32a21c[];
extern int lookup_low_id(int);
extern void call_8c0e196c(void *, void *);
extern void operation_8c1e5ecc(void *, int);
extern void call_8c1d6b7c(Object *, int, Vector3);
extern int operation_8c1d78fc(void *);
extern void operation_8c1e6014(void *);
void operation_8c1d6968(Object *o)
{
    int t1;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    int t2;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c329b58));
        *(Vector3 *)&o->fac = *(Vector3 *)&g_8c32a1a4;
        v1 = (S_vv1 *)o->f30->f00;
        v2 = (S_vv2 *)o->f30->f04;
        v3 = (S_vv3 *)o->f30->f08;
        v4 = (S_vv4 *)o->f30->f0c;
        v5 = (S_vv5 *)o->f30->f10;
        operation_8c1e5ecc((void *)v1, (int)(g_8c32a21c + 0x31));
        operation_8c1e5ecc((void *)v2, (int)(g_8c32a21c + 0x38));
        operation_8c1e5ecc((void *)v3, (int)(g_8c32a21c + 0x40));
        operation_8c1e5ecc((void *)v4, (int)(g_8c32a21c + 0x48));
        operation_8c1e5ecc((void *)v5, (int)(g_8c32a21c + 0x4d));
        v1->f00 |= 0x20;
        v2->f00 |= 0x20;
        v3->f00 |= 0x20;
        v4->f00 |= 0x20;
        v5->f00 |= 0x20;
        call_8c1d6b7c(o, (int)(t1 + 0x2fc), *(Vector3 *)&g_8c32a1b0);
        if (o->f78 != 0) {
            t2 = operation_8c1d78fc((void *)o);
            if (t2 != 0) {
                call_8c1d6b7c(o, 0, *(Vector3 *)&g_8c32a1bc);
            } else {
                call_8c1d6b7c(o, (int)((int)o->f78 + 6), *(Vector3 *)&g_8c32a1c8);
            }
            operation_8c1e6014((void *)v5);
        }
    }
}
