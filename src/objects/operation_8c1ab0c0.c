typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    Arg0_24 *f24;
    int f28;
};
extern int hierarchy_is_active(void *);
void operation_8c1ab0c0(Object *o)
{
    int t1;
    o->f20 += -1;
    t1 = hierarchy_is_active((void *)(o->f24));
    if (t1 == 0) {
        o->f04 |= 1;
        return;
    }
    if (o->f20 == 0) {
        if (o->f28 != 0) {
            ((void (*)(void *))(o->f28))((void *)(o->f24));
        }
        o->f04 |= 1;
    }
}
