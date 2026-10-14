typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a4];
    int f3a4;
    int f3a8;
};
extern void call_8c05fd7c(int, Object *, int, int, int);
void operation_8c1b6a9c(Object *o)
{
    if (((int)o->f3a4 - (int)o->f3a8) > 0) {
        call_8c05fd7c(0x3000a, o, 0, -0x20, 0);
    }
}
