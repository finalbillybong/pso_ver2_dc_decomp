typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x10];
    int f10;
};
struct Object {
    char unknown0[0x20];
    short f20;
};
extern int call_8c02303c(void);
extern int call_8c1c74dc(int);
extern int operation_8c04a9c4(void *, int);
extern void call_8c073ce8(Arg1 *, short);
int operation_8c023a44(Object *o, Arg1 *a1)
{
    int t1;
    int t2;
    int t3;
    t1 = call_8c02303c();
    if (t1 == 0) {
        return 1;
    }
    t2 = call_8c1c74dc((int)a1);
    t3 = operation_8c04a9c4((void *)o, a1->f10 * t2);
    if (t3 != 0) {
        call_8c073ce8(a1, o->f20);
        return 0;
    }
    return 2;
}
