typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x354];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
};
extern float call_8c130334(float, float);
extern int angle_step(int, int, int);
void operation_8c05c404(Object *o, int a1)
{
    float t1;
    int t2;
    t1 = call_8c130334(o->f3bc, o->f3c4);
    t2 = angle_step((int)o->f64, (int)(t1 * 65536.0f / 6.28318405f), a1);
    o->f64 = (Arg0_64 *)(short)t2;
}
