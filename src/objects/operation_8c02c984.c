typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
};
extern void operation_8c02c998(void *);
void operation_8c02c984(Object *o)
{
    o->f34 &= -0x801;
    operation_8c02c998((void *)o);
}
