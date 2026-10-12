typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1d8];
    int f1d8;
    char unknown1dc[0x38];
    float f214;
};
extern int call_8c07fac0(Object *, int);
extern void call_8c074ac4(Object *, int);
extern void call_8c07db40(Object *, int);
void operation_8c07dac0(Object *o, int a1)
{
    int v1;
    int t1;
    v1 = (int)(*(int *)0x8c510ba0 != 0);
    if (v1 != 0 && (unsigned int)1 >= (unsigned int)(a1 + -6)) {
        return;
    }
    if (a1 != 1) {
        if (((o->f1d8 & 0x10)) == 0) {
            return;
        }
        if (o->f214 > 0.0f) {
            return;
        }
        t1 = call_8c07fac0(o, a1);
        if (t1 == 0) {
            return;
        }
        call_8c074ac4(o, a1);
        return;
    }
    call_8c07db40(o, a1);
}
