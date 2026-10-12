typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30c];
    short f30c;
};
extern int actor_animation_ready(void *);
extern void call_8c1e8e60(Object *, int, int);
void operation_8c1ec298(Object *o)
{
    int t1;
    if (o->f30c == 5) {
        t1 = actor_animation_ready((void *)o);
        if (t1 != 0) {
            call_8c1e8e60(o, 1, 0);
        }
    }
}
