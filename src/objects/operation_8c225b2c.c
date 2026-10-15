typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x7c];
    float f7c;
    char unknown80[0x14];
    float f94;
    char unknown98[0xc];
    float fa4;
};
extern void operation_8c225c2c(void *);
void operation_8c225b2c(Object *o)
{
    if (o->fa4 != 0.0f) {
        o->f94 += o->fa4;
        o->f7c += o->fa4;
        o->fa4 *= 0.0f;
        operation_8c225c2c((void *)o);
    }
}
