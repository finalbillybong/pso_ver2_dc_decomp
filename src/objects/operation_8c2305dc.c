typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    char f68;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern void call_8c2306c4(Object *);
extern int operation_8c01d8a8(void *, int);
extern void operation_8c2307ac(void *);
extern void operation_8c2307dc(void *);
extern void operation_8c2308b0(void *);
extern void call_8c0db30c(Object *);
extern void update_view_nodes(void *, void *);
void operation_8c2305dc(Object *o)
{
    int t1;
    int t2;
    if (((o->f34 & 2)) == 0) {
        o->f64 = 0x1000000;
    }
    if (((o->f68 & 1)) == 0) {
        call_8c2306c4(o);
        if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
            t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
            if (t1 == 0) {
                goto L_8c230622;
            }
        }
        operation_8c2307ac((void *)o);
L_8c230622:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
            t2 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
            if (t2 == 0) {
                goto L_8c230640;
            }
        }
        operation_8c2307dc((void *)o);
    }
L_8c230640:;
    operation_8c2308b0((void *)o);
    call_8c0db30c(o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
