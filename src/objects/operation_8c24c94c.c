typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c09e6b4(void *);
void operation_8c24c94c(Object *o)
{
    operation_8c09e6b4((void *)o);
    o->f04 |= 1;
}
