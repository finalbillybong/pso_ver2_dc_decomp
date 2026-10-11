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
void operation_8c024720(Object *o)
{
    if (*(int *)0x8c41bd10 == 0) {
        o->f34 &= -0x10001;
    }
}
