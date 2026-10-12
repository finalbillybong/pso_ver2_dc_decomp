typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x8c];
    int f8c;
    char unknown90[0x4];
    int f94;
};
extern int call_8c10eee4(Object *, int, int);
int operation_8c10e8c0(Object *o, int a1)
{
    int t1;
    t1 = call_8c10eee4(o, o->f94 + 0x3c, a1);
    if (t1 != 0) {
        o->f8c |= 2;
        return 1;
    }
    return 0;
}
