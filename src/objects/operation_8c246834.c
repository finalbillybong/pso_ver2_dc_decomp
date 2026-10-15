typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    float fe8;
    float fec;
};
extern int call_8c2473a8(Object *);
void operation_8c246834(Object *o)
{
    int t1;
    t1 = call_8c2473a8(o);
    if (t1 == 0 && 50.0f > o->fe8) {
        if (!((o->fec += 0.13333334f) > 1.0f)) {
            return;
        }
        o->fec = 1.0f;
        return;
    }
    if (0.0f > (o->fec += -0.0444444455f)) {
        o->fec = 0.0f;
    }
}
