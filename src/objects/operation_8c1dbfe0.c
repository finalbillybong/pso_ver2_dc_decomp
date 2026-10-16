typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c32aee4 S_L8c32aee4;
typedef struct S_L8c32aef0 S_L8c32aef0;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    float tag;
    float f04;
};
struct S_L8c32aef0 {
    float f00;
    float f04;
    float f08;
    float f0c;
};
struct Arg1 {
    float f00;
    float f04;
};
struct S_L8c32aee4 {
    char unknown0[0x4];
    int f04;
};
extern S_L8c32aee4 g_8c32aee4;
extern S_L8c32aef0 g_8c32aef0;
void operation_8c1dbfe0(Object *o, Arg1 *a1, int a2)
{
    (&g_8c32aef0)->f00 = o->tag;
    (&g_8c32aef0)->f04 = o->f04;
    (&g_8c32aef0)->f08 = a1->f00;
    (&g_8c32aef0)->f0c = a1->f04;
    (&g_8c32aee4)->f04 = a2;
}
