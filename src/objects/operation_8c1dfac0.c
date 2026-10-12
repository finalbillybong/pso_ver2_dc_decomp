typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Object {
    char unknown0[0x68];
    int f68;
    char unknown6c[0x4];
    Arg0_70 *f70;
};
extern S_L8c41cba0 g_8c41cba0;
extern void call_8c1e2a18(void *);
extern int call_8c1e2354(void *);
void operation_8c1dfac0(Object *o)
{
    int t1;
    if ((((&g_8c41cba0)->f28 & 0x400)) != 0 && o->f70 != 0) {
        call_8c1e2a18(o->f70);
        t1 = call_8c1e2354(o->f70);
        if (t1 != 0) {
            o->f68 |= 0x40;
        }
    }
}
