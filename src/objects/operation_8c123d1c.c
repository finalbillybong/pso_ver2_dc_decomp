typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6c];
    float f6c;
    char unknown70[0xc8];
    char f138;
};
extern int call_8c0eea7c(Object *, float);
void operation_8c123d1c(Object *o)
{
    int t1;
    t1 = call_8c0eea7c(o, o->f6c * o->f6c);
    if (t1 == 1) {
        o->f138 = 4;
    }
}
