typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_a0 Arg0_a0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x38];
    Arg0_a0 *fa0;
};
extern void operation_8c199bc4(void *);
extern void operation_8c225b2c(void *);
extern void approach_pair_grid_offset(void *);
extern void call_8c0db30c(Object *);
extern void operation_8c225b70(void *);
extern void update_view_nodes(void *, void *);
void operation_8c225688(Object *o)
{
    if (((o->f34 & 2)) == 0) {
        o->f64 = 0x1000000;
    }
    if (!(7.5f > (float)o->f64)) {
        operation_8c199bc4((void *)(o->fa0));
    }
    operation_8c225b2c((void *)o);
    approach_pair_grid_offset((void *)o);
    call_8c0db30c(o);
    operation_8c225b70((void *)o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
