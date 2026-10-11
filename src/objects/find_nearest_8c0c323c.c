typedef struct Vector3 { float x; float y; float z; } Vector3;
typedef struct Object { char unknown0[0x20]; unsigned short id; char unknown22[0x12]; int flags; } Object;
extern float object_distance_xz(Object *, Object *, Vector3 *);
unsigned short find_nearest_8c0c323c(Object *o, Vector3 *out, float radius)
{
    Vector3 point;
    unsigned short best = 0xffff;
    unsigned short last = 0x4000;
    int i;
    int mask = 0x02000800;
    float limit = radius * radius;
    for (i = *(int *)0x8c467874; i < *(int *)0x8c467874 + *(int *)0x8c467878; i++) {
        Object *other = *(Object **)(0x8c467240 + (i << 2));
        if (!other) break;
        if (other->id != o->id) {
            unsigned short first = 0x1000;
            if (other->id >= first && last > other->id && !(other->flags & mask)) {
                float distance = object_distance_xz(o, other, &point);
                if (limit > distance) {
                    best = other->id;
                    limit = distance;
                    if (out) *out = point;
                }
            }
        }
    }
    return best;
}
