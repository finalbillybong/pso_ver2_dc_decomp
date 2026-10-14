typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xa0];
    float fa0;
};
extern void call_8c2574a0(Object *);
void operation_8c2572f4(Object *o)
{
    o->fa0 += *(float *)0x8c33ff6c;
    if (!(1.0f > o->fa0)) {
        call_8c2574a0(o);
    }
}
