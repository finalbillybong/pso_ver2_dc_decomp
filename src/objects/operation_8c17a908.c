typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2b0];
    float f2b0;
};
extern void call_8c172c50(void *, float, float);
extern void operation_8c172c30(void *, int, int);
void operation_8c17a908(Object *o)
{
    call_8c172c50((void *)(&o->f2b0), -2.0f, 0.0f);
    if (o->f2b0 == 0.0f) {
        operation_8c172c30((void *)(((char *)o + 0x2b4)), -0x71c, 0);
    }
}
