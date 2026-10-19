typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469e2c S_g8c469e2c;
typedef struct S_g8c469e30 S_g8c469e30;
typedef struct Object Object;
struct S_g8c469e2c {
    int f00;
};
struct Object {
    char unknown0[0x4d0];
    int f4d0;
};
struct S_g8c469e30 {
    int f00;
};
extern S_g8c469e2c *g_8c469e2c;
extern S_g8c469e30 *g_8c469e30;
void operation_8c091180(Object *o)
{
    g_8c469e2c->f00 = (int)(o->f4d0);
    g_8c469e30->f00 = (int)(o->f4d0);
}
