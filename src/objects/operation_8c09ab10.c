typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    int dispatch;
    char unknown1c[0x10];
    int f2c;
    char unknown30[0x3];
    char f33;
};
extern int call_8c09ab38(void);
void operation_8c09ab10(Object *o)
{
    int t1;
    o->f33 = 2;
    o->dispatch |= -0x1000000;
    t1 = call_8c09ab38();
    o->f2c = t1;
}
