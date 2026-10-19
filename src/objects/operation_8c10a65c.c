typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d7bac S_g8c4d7bac;
typedef struct Object Object;
typedef struct Arg0_36c Arg0_36c;
struct Object {
    char unknown0[0x36c];
    Arg0_36c *f36c;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
};
struct S_g8c4d7bac {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
    float f10;
};
extern S_g8c4d7bac *g_8c4d7bac;
extern float g_8c4d7bb0;
extern float g_8c4d7bb4;
extern float g_8c4d7bb8;
void operation_8c10a65c(Object *o)
{
    S_g8c4d7bac *p;
    o->f36c->f04 = g_8c4d7bac->f04;
    p = g_8c4d7bac;
    g_8c4d7bb0 = p->f08;
    g_8c4d7bb4 = p->f0c;
    g_8c4d7bb8 = p->f10;
}
