typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
};
extern void call_8c1b1c94(Object *);
void operation_8c1b2078(Object *o)
{
    if (o->f3a0 == 0) {
        call_8c1b1c94(o);
    }
}
