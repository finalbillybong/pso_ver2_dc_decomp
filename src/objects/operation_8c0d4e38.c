typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x360];
    float f3c8;
    char unknown3cc[0x14];
    int f3e0;
};
extern int call_8c0d4c80(Object *, void *, float);
static inline int ready_8c0d4e38(Object *o)
{
    int v5;
    int v11;
    v11 = 0;
    v5 = 0;
    if (((o->f3e0 & 0x10000)) == 0 && o->f3c8 > 100.0f) {
        v5 = 1;
    }
    if (v5 != 0 && 150.0f > o->f3c8) {
        v11 = 1;
    }
    return v11;
}
int operation_8c0d4e38(Object *o)
{
    int v1;
    v1 = 0;
    if (ready_8c0d4e38(o)) {
        if (call_8c0d4c80(o, (void *)(o->f64), o->f3c8 - 20.0f) == 0) {
            v1 = 1;
        }
    }
    return v1;
}
