typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4688a0 S_g8c4688a0;
typedef struct S_g8c4688a0_42c S_g8c4688a0_42c;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xc];
    int f38;
    char unknown3c[0x334];
    float f370;
    float f374;
    char unknown378[0x7c];
    int f3f4;
    int f3f8;
};
struct S_g8c4688a0 {
    char unknown0[0x42c];
    S_g8c4688a0_42c *f42c;
};
struct S_g8c4688a0_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
    char unknown10[0x8];
    int f18;
};
extern S_g8c4688a0 *g_8c4688a0;
extern float call_8c12b570(float);
void operation_8c061044(Object *o)
{
    float t1;
    t1 = call_8c12b570(o->f370);
    o->f3f8 = (int)t1;
    if (!(1.0f > o->f374)) {
        o->f3f4 = 1;
        o->f38 = (int)(g_8c4688a0->f42c->f18);
        o->f28 = (int)(g_8c4688a0->f42c->f0c);
        return;
    }
    o->f3f4 = 0;
    o->f38 = (int)(g_8c4688a0->f42c->f08);
    o->f28 = (int)(g_8c4688a0->f42c->f0c);
}
