typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_e4 Arg0_e4;
struct Object {
    char unknown0[0xe4];
    Arg0_e4 *fe4;
    int fe8;
};
extern int hierarchy_is_active(void *);
void operation_8c1ab1f4(Object *o)
{
    int t1;
    if (o->fe4 != 0) {
        t1 = hierarchy_is_active((void *)(o->fe4));
        if (t1 == 0) {
            o->fe4 = (Arg0_e4 *)0;
            o->fe8 = 0;
        }
    }
}
