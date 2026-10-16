typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3292ac S_L8c3292ac;
typedef struct S_L8c3292b8 S_L8c3292b8;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    float tag;
    float f04;
};
struct S_L8c3292b8 {
    float f00;
    float f04;
    float f08;
    float f0c;
};
struct Arg1 {
    float f00;
    float f04;
};
struct S_L8c3292ac {
    char unknown0[0x4];
    int f04;
};
extern S_L8c3292ac g_8c3292ac;
extern S_L8c3292b8 g_8c3292b8;
void operation_8c1cd008(Object *o, Arg1 *a1, int a2)
{
    (&g_8c3292b8)->f00 = o->tag;
    (&g_8c3292b8)->f04 = o->f04;
    (&g_8c3292b8)->f08 = a1->f00;
    (&g_8c3292b8)->f0c = a1->f04;
    (&g_8c3292ac)->f04 = a2;
}
