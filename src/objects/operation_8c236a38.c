typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c510b80 S_L8c510b80;
typedef struct Object Object;
struct S_L8c510b80 {
    float f00;
    float f04;
    float f08;
    int f0c;
    char unknown10[0x2];
    short f12;
    int f14;
    char f18;
};
struct Object {
    char unknown0[0x4];
    int f04;
    int f08;
    float f0c;
    float f10;
    char f14;
};
extern S_L8c510b80 g_8c510b80;
void operation_8c236a38(Object *o)
{
    (&g_8c510b80)->f12 = 0;
    (&g_8c510b80)->f00 = o->f0c;
    (&g_8c510b80)->f04 = 0.0f;
    (&g_8c510b80)->f08 = o->f10;
    (&g_8c510b80)->f0c = (int)(o->f08);
    (&g_8c510b80)->f18 = o->f14;
    (&g_8c510b80)->f14 = (int)(o->f04);
}
