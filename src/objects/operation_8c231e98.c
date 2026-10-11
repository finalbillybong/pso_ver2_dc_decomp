typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    Arg0_28 *f28;
};
extern void *pair_grid_view_ready(void *);
void operation_8c231e98(Object *o)
{
    void *t1;
    if (o->f28 != 0) {
        t1 = pair_grid_view_ready(o->f28);
        if (t1 != 0) {
            o->f20 = 1;
        }
    }
}
