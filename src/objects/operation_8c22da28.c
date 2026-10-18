typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_84 Arg0_84;
typedef struct Arg0_88 Arg0_88;
struct Object {
    char unknown0[0x24];
    int f24;
    int f28;
    char unknown2c[0x58];
    Arg0_84 *f84;
    Arg0_88 *f88;
    char unknown8c[0x4];
    int f90;
    int f94;
    int f98;
};
extern void clear_global_8c22fff0(void);
extern int call_8c3727a0(int);
extern int call_8c37293e(int, int);
extern void request_resource_release(void *);
extern void operation_8c22e950(void *);
void operation_8c22da28(Object *o)
{
    int v7;
    int v6;
    int t1;
    int t2;
    v7 = (int)0;
    o->f98 = v7;
    if (o->f90 != 0) {
        clear_global_8c22fff0();
    }
    v6 = (int)0;
    while (8 > v6) {
        t1 = call_8c3727a0(v6);
        if (t1 != 0) {
            t2 = call_8c37293e(v6, 0);
            if (!(t2 >= 0)) {
                return;
            }
            if (t2 > o->f28) {
                *(int *)((char *)((char *)o + 0x34) + (v6 << 2)) = 1;
                v7 = (int)1;
                goto L_8c22da94;
            }
            *(int *)((char *)((char *)o + 0x34) + (v6 << 2)) = 0;
            o->f98 = 1;
        } else {
            *(int *)((char *)((char *)o + 0x34) + (v6 << 2)) = 0;
        }
L_8c22da94:;
        v6 = (int)(v6 + 1);
    }
    if (v7 != 0) {
        o->f94 = 2;
        if (o->f88 != 0) {
            request_resource_release((void *)(o->f88));
            o->f88 = (Arg0_88 *)0;
        }
        operation_8c22e950((void *)o);
        o->f24 = 0;
        return;
    }
    o->f94 = 3;
    if (o->f88 != 0) {
        request_resource_release((void *)(o->f88));
        o->f88 = (Arg0_88 *)0;
    }
    if (o->f84 != 0) {
        request_resource_release((void *)(o->f84));
        o->f84 = (Arg0_84 *)0;
    }
    operation_8c22e950((void *)o);
}
