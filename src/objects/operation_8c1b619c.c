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
extern void call_8c1b3284(void *, float);
void operation_8c1b619c(Object *o)
{
    call_8c1b3284((void *)(((char *)o + 0x3c)), 125.0f);
    o->f3a0 = 0x96;
}
