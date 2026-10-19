typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d2];
    short f30a;
};
extern void operation_8c05426c(void *, int, int);
void operation_8c0fe858(Object *o)
{
    o->f30a = 3;
    operation_8c05426c((void *)o, 0, 1);
    o->f34 &= -0x40001;
}
