typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xc0];
    float ff8;
    char unknownfc[0x4];
    float f100;
    char unknown104[0x214];
    float f318;
    char unknown31c[0x4];
    float f320;
    char unknown324[0x6c];
    short f390;
};
extern void call_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
extern void transform_actor_records(void *);
extern void apply_object_velocity(void *);
void operation_8c051450(Object *o)
{
    o->f390 = (unsigned int)o->f390 >> 1 << 1;
    call_8c01c5f0(o);
    if (((o->f34 & 0x800000)) == 0) {
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
    }
    transform_actor_records((void *)o);
    if (o->ff8 < (o->f100 * 30.0f * 0.5f)) {
        apply_object_velocity((void *)o);
        o->f318 *= 0.5f;
        o->f320 *= 0.5f;
    }
}
