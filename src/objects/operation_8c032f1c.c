typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_10ac Arg0_10ac;
struct Object {
    char unknown0[0x10ac];
    Arg0_10ac *f10ac;
    char unknown10b0[0x4];
    int f10b4;
};
extern int call_8c032e7c(void);
void operation_8c032f1c(Object *o)
{
    int t1;
    t1 = call_8c032e7c();
    if (t1 != 0 && o->f10b4 != 0) {
        ((void (*)(Object *, void *, int))(o->f10b4))(o, (void *)(o->f10ac), t1);
    }
}
