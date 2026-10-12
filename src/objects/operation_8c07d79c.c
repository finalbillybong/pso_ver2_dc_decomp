typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x1dc];
    float f214;
};
extern void call_8c07f06c(Object *, int);
void operation_8c07d79c(Object *o)
{
    if (o->f214 > 0.0f) {
        o->f214 -= 1.0f;
    }
    if (((o->f34 & 0x8000000)) == 0) {
        call_8c07f06c(o, 1);
        return;
    }
    call_8c07f06c(o, 0);
}
