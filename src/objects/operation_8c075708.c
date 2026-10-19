typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1d8];
    int f1d8;
    int f1dc;
    char unknown1e0[0x1c];
    int f1fc;
};
extern void operation_8c209a88(void *);
void operation_8c075708(Object *o)
{
    o->f1d8 = 0;
    o->f1dc = 0;
    o->f1fc &= -0xd;
    operation_8c209a88((void *)o);
}
