typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    int fe4;
};
extern int call_8c0eeb00(Object *);
int operation_8c24ba5c(Object *o)
{
    int v3;
    int t1;
    v3 = (int)1;
    t1 = call_8c0eeb00(o);
    if (t1 == 0 && o->fe4 == 0) {
        v3 = (int)0;
    }
    return (int)(v3);
}
