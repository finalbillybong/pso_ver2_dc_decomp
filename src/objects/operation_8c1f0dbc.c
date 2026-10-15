typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30c];
    short f30c;
    char unknown30e[0x42];
    int f350;
    char unknown354[0x254];
    float f5a8;
};
extern int actor_matches_current_mode(void *);
void operation_8c1f0dbc(Object *o)
{
    float v3;
    int t1;
    t1 = actor_matches_current_mode((void *)o);
    if (t1 != 0) {
        o->f350 &= -5;
        return;
    }
    if (o->f30c != 0) {
        if (o->f30c == 1) {
            return;
        }
        return;
    }
    v3 = (float)(o->f5a8 - 0.1f);
    if (0.0f > (o->f5a8 - 0.1f)) {
        o->f30c = 1;
        v3 = (float)0.0f;
    }
    o->f5a8 = v3;
}
