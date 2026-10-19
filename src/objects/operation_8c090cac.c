typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469e10 S_g8c469e10;
typedef struct S_g8c469e10_42c S_g8c469e10_42c;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xc];
    int f38;
};
struct S_g8c469e10 {
    char unknown0[0x42c];
    S_g8c469e10_42c *f42c;
};
struct S_g8c469e10_42c {
    char unknown0[0x8];
    int f08;
    char unknownc[0x10];
    int f1c;
};
extern S_g8c469e10 *g_8c469e10;
void operation_8c090cac(Object *o)
{
    o->f38 = (int)(g_8c469e10->f42c->f08);
    o->f28 = (int)(g_8c469e10->f42c->f1c);
}
