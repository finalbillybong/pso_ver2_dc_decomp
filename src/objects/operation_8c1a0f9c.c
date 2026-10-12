typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x94];
    float f3a0;
};
extern void operation_8c05426c(void *, int, int);
void operation_8c1a0f9c(Object *o)
{
    o->f3a0 -= 0.1f;
    if (0.0f > o->f3a0) {
        o->f3a0 = 0.0f;
        o->f30a = 0;
        operation_8c05426c((void *)o, 0, 0x10000000);
    }
}
