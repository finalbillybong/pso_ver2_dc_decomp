typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    float f70;
    float f74;
    char unknown78[0x6c];
    int fe4;
    char unknowne8[0x1c];
    int f104;
};
extern int call_8c0eea7c(Object *, float);
extern int call_8c131e3c(Object *, float);
extern float squared_distance_xz(void *, void *);
extern void call_8c3bdf60(void *, void *);
void operation_8c131c90(Object *o)
{
    int t1;
    int t2;
    float t3;
    t1 = call_8c0eea7c(o, 900.0f);
    if (t1 == 1) {
        t2 = call_8c131e3c(o, o->f70 + 30.0f);
        if (t2 != 1) {
            return;
        }
        o->fe4 = 3;
        o->f104 = 0;
        return;
    }
    t3 = squared_distance_xz((void *)(((char *)o + 0x10c)), (void *)(((char *)o + 0x3c)));
    if (((o->f74 + 1e-07f) * (o->f74 + 1e-07f)) > t3) {
        o->fe4 = 0;
        return;
    }
    call_8c3bdf60((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x118)));
}
