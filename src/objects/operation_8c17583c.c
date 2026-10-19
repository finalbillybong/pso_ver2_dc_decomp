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
    char unknown24[0x4];
    float f28;
};
struct Arg0_20 {
    char unknown0[0xe4];
    short fe4;
};
extern int hierarchy_is_active(void *);
extern void call_8c3bdf60(void *, void *);
void operation_8c17583c(Object *o)
{
    int t1;
    o->f04 &= -0x11;
    t1 = hierarchy_is_active((void *)(o->f20));
    if (t1 == 1 && o->f20->fe4 == 2) {
        call_8c3bdf60((void *)(((char *)o + 0x30)), (void *)(((char *)o + 0x24)));
        o->f28 += -0.2f;
        return;
    }
    o->f04 |= 1;
}
