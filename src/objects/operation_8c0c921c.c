typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3e4];
    int f3e4;
};
extern int capture_current_contact(void *);
int operation_8c0c921c(Object *o)
{
    int t1;
    t1 = capture_current_contact((void *)o);
    if (t1 == 0) {
        o->f3e4 &= -0x11;
    } else {
        o->f3e4 |= 0x10;
    }
    return (int)(t1);
}
