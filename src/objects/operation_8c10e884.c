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
extern int call_8c10ed80(Object *, int);
int operation_8c10e884(Object *o)
{
    int t1;
    t1 = call_8c10ed80(o, o->f94 + 0x3c);
    if (t1 != 0) {
        o->f8c |= 2;
        return 1;
    }
    return 0;
}
