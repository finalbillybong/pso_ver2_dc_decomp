typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Block_p0_24 {
    float f00;
    float f04;
    float f08;
} Block_p0_24;
struct Object {
    char unknown0[0x24];
    Block_p0_24 f24;
    char unknown30[0x1c];
    float f4c;
    float f50;
    float f54;
    char unknown58[0x10];
    float f68;
    char unknown6c[0x10];
    Vector3 f7c;
};
extern void operation_8c0b9fb8(void *);
void operation_8c0b9d68(Object *o)
{
    *(Vector3 *)&o->f7c = *(Vector3 *)&o->f24;
    o->f24.f00 += o->f4c * o->f68;
    o->f24.f04 += o->f50 * o->f68;
    o->f24.f08 += o->f54 * o->f68;
    operation_8c0b9fb8((void *)o);
}
