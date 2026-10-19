typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
struct Object {
    char unknown0[0x108];
    int f108;
    int f10c;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_L8c41cba0 g_8c41cba0;
extern int target_in_radius_8c113490(void *);
int operation_8c113440(Object *o)
{
    int t1;
    if (o->f108 == 2) {
        return 0;
    }
    if (o->f108 == 0 && o->f10c == 1) {
        return 0;
    }
    t1 = target_in_radius_8c113490((void *)o);
    if (t1 != 0 && (((&g_8c41cba0)->f28 & 4)) != 0) {
        return 1;
    }
    return 0;
}
