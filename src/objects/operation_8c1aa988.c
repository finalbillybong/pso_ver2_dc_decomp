typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0xc];
    int f0c;
    char unknown10[0xc];
    int f1c;
};
struct Arg1 {
    char unknown0[0x350];
    int f350;
};
extern float call_8c1a7390(int);
void operation_8c1aa988(Object *o, Arg1 *a1)
{
    float t1;
    o->f0c |= 2;
    t1 = call_8c1a7390((int)a1);
    o->f1c = (int)t1;
    a1->f350 &= -0x81;
}
