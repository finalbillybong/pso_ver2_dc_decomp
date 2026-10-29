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
typedef struct S_vv60 S_vv60;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0xa];
    short f2c;
    char unknown2e[0xae];
    Arg0_dc *fdc;
};
struct S_vv60 {
    char unknown0[0x18];
    int f18;
};
struct S_vv5 {
    char unknown0[0x2c];
    short f2c;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct S_c8c052648 {
    char unknown0[0x18];
    int f18;
};
extern int g_8c467874;
extern int g_8c467878;
extern S_c8c052648 *operation_8c052648(void *, void *, float);
extern int operation_8c052e58(int, int);
extern int operation_8c052f5c(int, int, void *);
void operation_8c05228c(Object *o)
{
    S_c8c052648 *t1;
    int v1;
    int v4;
    S_vv5 *v5;
    S_c8c052648 *pm4;
    int v2;
    S_vv60 *v60;
    int v3;
    v60 = (S_vv60 *)o->fdc;
    if (v60 != 0) {
        v60->f18 &= -0x1200001;
        v1 = (int)0x1000;
        v2 = (int)0x200000;
        v4 = (int)g_8c467874;
        v3 = (int)0x1000000;
        while ((g_8c467874 + g_8c467878) > v4) {
            v5 = (S_vv5 *)*(S_g8c467240 **)((char *)0x8c467240 + (v4 << 2));
            if (v5 != 0) {
                if (o->f2c != v5->f2c && !((unsigned int)o->f20 < (unsigned int)(unsigned short)v1)) {
                    goto L_8c05232a;
                }
                pm4 = operation_8c052648((void *)o, (void *)v5, 10000.0f);
                t1 = pm4;
                if (0 != t1) {
                    int t2;
                    o->fdc->f18 = o->fdc->f18 | v2;
                    t2 = operation_8c052e58((o->fdc->f18), (t1->f18));
                    if (0 == t2) {
                        int t3;
                        t3 = operation_8c052f5c((int)o, (int)v5, (void *)t1);
                        if (t3 != 0) {
                            o->fdc->f18 |= v3;
                        }
                    }
                }
            }
        L_8c05232a:
            ;
            v4 = (int)(v4 + 1);
        }
    }
}
