typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_50 Arg0_50;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x2c];
    Arg0_50 *f50;
    unsigned char f54;
    char f55;
    char unknown56[0x2];
    int f58;
};
extern int g_8c470324;
extern S_L8c41cba0 g_8c41cba0;
extern int operation_8c01d8a8(void *, int);
extern void request_resource_release(void *);
extern int operation_8c0e90f4(void *);
extern int operation_8c0101dc(int);
extern int operation_8c19b054(void);
extern int call_8c37293e(int, int);
void operation_8c0e94cc(Object *o)
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
    int t10;
    char *p;
    p = (char *)&g_8c41cba0;
    if (((*(int *)(p + 0x28) & 4)) == 0) {
        p += 0x110;
        t1 = operation_8c01d8a8((void *)p, 4);
        if (t1 == 0 && (((&g_8c41cba0)->f28 & 2)) == 0) {
            t2 = operation_8c01d8a8((void *)p, 2);
            if (t2 == 0 && (((&g_8c41cba0)->f28 & 0x400)) == 0) {
                t3 = operation_8c01d8a8((void *)p, 0x400);
                if (t3 == 0 && (((&g_8c41cba0)->f28 & 0x200)) == 0) {
                    t4 = operation_8c01d8a8((void *)p, 0x200);
                    if (t4 == 0 && (((&g_8c41cba0)->f28 & 8)) == 0) {
                        t5 = operation_8c01d8a8((void *)p, 8);
                        if (t5 == 0) {
                            goto L_8c0e9560;
                        }
                    }
                }
            }
        }
    }
    if (o->f50 != 0) {
        request_resource_release((void *)(o->f50));
        o->f50 = (Arg0_50 *)0;
    }
    o->f20 = 2;
L_8c0e9560:;
    o->f55 = o->f54;
    t6 = operation_8c0e90f4((void *)o);
    o->f54 = t6;
    switch (g_8c470324) {
    case 0:
        t7 = operation_8c0101dc((int)(o->f58));
        if (t7 == -1) {
            return;
        }
        t8 = operation_8c0101dc((int)(o->f58));
        if (t8 == -2) {
            return;
        }
        if (o->f50 != 0) {
            request_resource_release((void *)(o->f50));
            o->f50 = (Arg0_50 *)0;
        }
        o->f20 = 1;
        return;
    case 1:
        t9 = operation_8c19b054();
        t10 = call_8c37293e((int)((char)t9), 0);
        if (t10 >= o->f58) {
            if (o->f50 != 0) {
                request_resource_release((void *)(o->f50));
                o->f50 = (Arg0_50 *)0;
            }
            o->f20 = 1;
        }
    }
}
