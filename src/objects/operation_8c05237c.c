typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c052648 S_c8c052648;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct S_c8c052648 {
    char unknown0[0x18];
    int f18;
};
extern S_c8c052648 *call_8c052648(Object *, int, float);
extern int operation_8c052e58(int, int);
extern int operation_8c052f5c(int, int, void *);
void operation_8c05237c(Object *o)
{
    S_c8c052648 *t1;
    char *v3;
    int v2;
    int v1;
    int t2;
    int t3;
    if (o->fdc != 0) {
        o->fdc->f18 &= -0x2400001;
        v2 = (int)(*(int *)0x8c467874 + *(int *)0x8c467878);
        v1 = (int)0x2400000;
        while (*(int *)0x8c467870 > v2) {
            v3 = (char *)*(int *)((char *)0x8c467240 + (v2 << 2));
            if (v3 != 0) {
                t1 = call_8c052648(o, (int)(v3), 10000.0f);
                if (t1 != 0) {
                    t2 = operation_8c052e58((int)(o->fdc->f18), (int)(t1->f18));
                    if (t2 == 0) {
                        t3 = operation_8c052f5c((int)o, (int)(v3), (void *)t1);
                        if (t3 != 0) {
                            o->fdc->f18 |= v1;
                        }
                    }
                }
            }
            v2 = (int)(v2 + 1);
        }
    }
}
