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
extern void operation_8c05426c(void *, int, int);
void operation_8c02aff0(Object *o)
{
    o->f34 &= -0x2000001;
    operation_8c05426c((void *)o, 0, 1);
}
