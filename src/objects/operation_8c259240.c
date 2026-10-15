typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    int f24;
    int f28;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern int g_8c4e2ba0;
extern S_L8c41cba0 g_8c41cba0;
extern int call_8c1196d4(void *, void *, int);
extern void operation_8c119764(int, int, int);
extern void operation_8c0dc610(void *, float);
extern void request_resource_release(void *);
void operation_8c259240(Object *o)
{
    int t1;
    if (o->f20 == 0) {
        if (g_8c4e2ba0 == 0) {
            return;
        }
        t1 = call_8c1196d4((void *)((void *)0x8c340264), (void *)((void *)0x8c34026c), 1);
        o->f20 = (Arg0_20 *)t1;
        if (o->f20 == 0) {
            return;
        }
        operation_8c119764((int)(o->f20), (int)(((char *)o + 0x2c)), 0);
        operation_8c0dc610((void *)(o->f20), -12001.0f);
        return;
    }
    if (!(--o->f28 >= 0)) {
        o->f28 = 0;
    }
    if (o->f24 != 0) {
        if (o->f28 != 0) {
            return;
        }
        request_resource_release((void *)(o->f20));
        o->f04 |= 1;
        return;
    }
    if ((((&g_8c41cba0)->f28 & 4)) != 0) {
        o->f24 = 1;
    }
}
