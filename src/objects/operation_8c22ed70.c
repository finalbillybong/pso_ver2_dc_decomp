typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xa4];
    int fa4;
};
extern int pair_grid_view_ready(void *);
int operation_8c22ed70(Object *o)
{
    int t1;
    if (o->fa4 != 0) {
        return 0;
    }
    t1 = pair_grid_view_ready((void *)o);
    return t1 != 0;
}
