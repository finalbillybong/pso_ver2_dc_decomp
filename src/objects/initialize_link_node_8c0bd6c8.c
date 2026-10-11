typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0xc];
    Vector3 f54;
    char unknown60[0x7c];
    Arg0_dc *fdc;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern void transform_actor_records(Object *);
void initialize_link_node_8c0bd6c8(Object *o)
{
    o->f3c = o->f54;
    transform_actor_records(o);
    o->f34 &= -0x200001;
    o->f34 |= 0x6040000;
    o->fdc->f18 = (unsigned int)o->fdc->f18 >> 1 << 1;
}
