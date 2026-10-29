typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c052648 S_c8c052648;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct S_vv5 {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_c8c052648 {
    char unknown0[0x18];
    int f18;
};
extern int g_8c467874;
extern S_c8c052648 *operation_8c052648(void *, void *, float);
extern int operation_8c052e58(int, int);
extern int operation_8c052f5c(int, int, void *);
extern void transform_actor_records(void *);
void operation_8c0521a0(Object *o)
{
    S_c8c052648 *t1;
    int v1;
    S_vv5 *v5;
    int v4;
    int v2;
    int t3;
    int t2;
    int pm5;
    int pm8;
    if (o->fdc != 0) {
        int v3;
        int pm6;
        Arg0_dc *pm7;
        pm6 = 0;
        v1 = (int)0x1000;
        v4 = (int)pm6;
        v2 = 0x100000;
        v3 = (int)0x800000;
        pm7 = o->fdc;
        pm8 = pm7->f18;
        o->fdc->f18 = -0x900001 & pm8;
        for (; v4 < g_8c467874; v4 = (v4 + 1)) {
            pm5 = v4 << 2;
            v5 = (S_vv5 *)*(S_g8c467240 **)((pm5) + (char *)0x8c467240);
            if (v5 != 0) {
                if ((unsigned short)(int)v5->f20 < (unsigned int)(unsigned short)v1) {
                    t1 = operation_8c052648((void *)o, (void *)v5, 10000.0f);
                    if (t1 != 0) {
                        o->fdc->f18 |= v2;
                        t2 = operation_8c052e58((int)(o->fdc->f18), (int)(t1->f18));
                        if (t2 == 0) {
                            t3 = operation_8c052f5c((int)o, (int)v5, (void *)t1);
                            if (t3 != 0) {
                                o->fdc->f18 |= v3;
                            }
                        }
                    }
                }
            }
        }
        if (((o->fdc->f18 & 0x900000)) == 0) {
            transform_actor_records((void *)o);
        }
    }
}
