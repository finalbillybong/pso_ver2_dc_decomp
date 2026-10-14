typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_4 Arg0_30_4;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Arg0_30 {
    char unknown0[0x4];
    Arg0_30_4 *f04;
};
struct Arg0_30_4 {
    char unknown0[0x20];
    int f20;
};
void operation_8c1ca234(Object *o, int a1)
{
    o->f30->f04->f20 = a1;
}
