typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c169528 S_c8c169528;
typedef struct S_c8c169528_20 S_c8c169528_20;
typedef struct Object Object;
typedef struct Arg0_1ac Arg0_1ac;
struct Object {
    char unknown0[0x1ac];
    Arg0_1ac *f1ac;
};
struct S_c8c169528 {
    char unknown0[0x20];
    S_c8c169528_20 *f20;
};
extern int g_8c4db3a8;
extern int g_8c4db3b0;
extern S_c8c169528 *call_8c169528(void *);
extern int hierarchy_is_active(void *);
int operation_8c16add0(Object *o, int a1, int a2)
{
    int v1;
    int v2;
    S_c8c169528 *t1;
    S_c8c169528 *t2;
    int t3;
    int t4;
    g_8c4db3a8 = a1;
    g_8c4db3b0 = 0;
    t1 = call_8c169528(o->f1ac);
    if (t1 == 0) {
        return 0;
    }
    g_8c4db3a8 = a2;
    g_8c4db3b0 = 0;
    t2 = call_8c169528(o->f1ac);
    if (t2 == 0) {
        return 0;
    }
    t3 = hierarchy_is_active(t1->f20);
    if (t3 == 0) {
        v1 = (int)0;
    } else {
        v1 = (int)t1->f20;
    }
    if (v1 == 0) {
        return 0;
    }
    t4 = hierarchy_is_active(t2->f20);
    if (t4 == 0) {
        v2 = (int)0;
    } else {
        v2 = (int)t2->f20;
    }
    if (v2 == 0) {
        return 0;
    }
    t1->f20 = (S_c8c169528_20 *)v2;
    t2->f20 = (S_c8c169528_20 *)v1;
    return 1;
}
