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
extern int hierarchy_is_active(void *);
void operation_8c1dde54(Object *o)
{
    int t1;
    t1 = hierarchy_is_active((void *)(o->f20));
    if (t1 == 0) {
        o->f20 = (Arg0_20 *)0;
        o->f04 |= 1;
    }
}
