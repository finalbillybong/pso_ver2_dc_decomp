typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    int fe4;
    float fe8;
    char unknownec[0x4];
    float ff0;
};
extern void operation_8c05428c(void *, int, int);
void operation_8c24b454(Object *o)
{
    o->fe8 -= o->ff0;
    if (0.0f > o->fe8) {
        o->fe8 = 0.0f;
        o->fe4 = 0;
        operation_8c05428c((void *)o, 0, 0x10);
    }
}
