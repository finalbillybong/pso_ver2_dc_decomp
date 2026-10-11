typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x2a6];
    int f398;
    char unknown39c[0xc];
    int f3a8;
};
extern void transform_actor_records(void *);
void operation_8c150c8c(Object *o)
{
    if (o->f398 != -1) {
        if (o->f398 != 0) {
            if (o->f398 == 1) {
                goto L_8c150cb4;
            }
        } else {
            o->ff0 = 0;
            o->f398 = 1;
        }
    }
L_8c150cb4:;
    transform_actor_records((void *)o);
    o->f3a8 += 0x800;
}
