typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x40];
    float f40;
};
extern void operation_8c0c5478(void *, void *, float);
void operation_8c0b9f98(Object *o)
{
    operation_8c0c5478((void *)(((char *)o + 0x24)), (void *)(((char *)o + 0x30)), o->f40 * 10.0f);
}
