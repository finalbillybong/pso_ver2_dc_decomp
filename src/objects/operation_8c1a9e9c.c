typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x9c];
    float f9c;
};
extern void operation_8c0c5478(void *, void *, float);
void operation_8c1a9e9c(Object *o)
{
    operation_8c0c5478((void *)(((char *)o + 0x3c)), (void *)((void *)0x8c306008), o->f9c * 2.0f);
}
