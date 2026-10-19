typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_1ac Arg0_1ac;
struct Object {
    char unknown0[0x1ac];
    Arg0_1ac *f1ac;
};
extern int g_8c4db3a8;
extern int g_8c4db3b0;
extern void operation_8c04a9c4(void *, int);
extern int operation_8c169528(void *);
extern void operation_8c16aad8(void *, int, void *, int);
int operation_8c16aa6c(Object *o, int a1, int a2, int a3)
{
    int t1;
    if (a2 == -1) {
        operation_8c04a9c4((void *)a1, a3);
        return 1;
    }
    g_8c4db3a8 = a2;
    g_8c4db3b0 = 0;
    t1 = operation_8c169528((void *)(o->f1ac));
    if (t1 == 0) {
        return 0;
    }
    operation_8c16aad8((void *)o, a1, (void *)t1, a3);
    return 1;
}
