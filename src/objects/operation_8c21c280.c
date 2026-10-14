typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    short f24;
    char unknown26[0x2];
    float f28;
    float f2c;
};
extern int ring_actor_eligible(unsigned short);
void operation_8c21c280(Object *o)
{
    int t1;
    t1 = ring_actor_eligible((unsigned short)(o->f24));
    if (t1 == 0) {
        o->f04 |= 1;
        return;
    }
    o->f28 += o->f2c;
    if (!(o->f28 > 0.0f)) {
        o->f28 = 0.0f;
        o->f04 |= 1;
        return;
    }
    if (!(1.0f > o->f28)) {
        o->f28 = 1.0f;
        o->f04 |= 1;
    }
}
