typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
};
struct Arg0_20 {
    char unknown0[0xbc4];
    int fbc4;
};
extern void apply_level_effects_8c07b354(void *);
void operation_8c07b454(Object *o)
{
    if (o->f20->fbc4 == 0) {
        apply_level_effects_8c07b354((void *)o);
        o->f04 |= 1;
    }
}
