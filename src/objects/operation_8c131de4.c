typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x74];
    float f74;
    char unknown78[0x6c];
    int fe4;
};
extern float squared_distance_xz(void *, void *);
extern void call_8c3bdf60(void *, void *);
void operation_8c131de4(Object *o)
{
    float t1;
    t1 = squared_distance_xz(((char *)o + 0x10c), ((char *)o + 0x3c));
    if (((o->f74 + 1e-07f) * (o->f74 + 1e-07f)) > t1) {
        o->fe4 = 2;
        return;
    }
    call_8c3bdf60(((char *)o + 0x3c), ((char *)o + 0x118));
}
