typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_68 Arg0_68;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    Arg0_68 *f68;
};
extern int operation_192b4c(void *);
extern void call_8c24e1f4(Object *);
extern void call_8c24e274(Object *);
extern void call_8c0db30c(Object *);
extern void update_view_nodes(void *, void *);
void operation_8c24e144(Object *o)
{
    int t1;
    if (((o->f34 & 2)) == 0) {
        o->f64 = 0x1000000;
    }
    t1 = operation_192b4c((void *)(o->f68));
    if (t1 != 0) {
        call_8c24e1f4(o);
    }
    call_8c24e274(o);
    call_8c0db30c(o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
