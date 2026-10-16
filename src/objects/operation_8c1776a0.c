typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x8];
    int f40;
    char unknown44[0x4];
    int f48;
};
extern S_L8c41cba0 g_8c41cba0;
extern int call_8c17796c(int);
extern void call_8c1778d4(int);
extern void operation_8c177748(int);
void operation_8c1776a0(Object *o)
{
    int v1;
    int t1;
    if (((*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c)) & 4)) != 0) {
        v1 = (int)((int)o->f48 + o->f40 * 0x4b);
        t1 = call_8c17796c(v1);
        if (t1 != 0) {
            call_8c1778d4(v1);
            return;
        }
        operation_8c177748(v1);
    }
}
