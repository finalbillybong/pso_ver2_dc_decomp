typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    short f2c;
    short f2e;
    char unknown30[0xc];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x18];
    int f60;
    int f64;
    int f68;
    char unknown6c[0x318];
    int f384;
    int f388;
};
void operation_8c05a03c(Object *o)
{
    int v1;
    int v2;
    o->f3c = 0.0f;
    o->f40 = 0.0f;
    o->f44 = 0.0f;
    o->f60 = 0;
    o->f64 = 0;
    o->f68 = 0;
    v1 = (int)((char *)o + 0x370);
    v2 = (int)0;
    while (5 > v2) {
        *(float *)((char *)((char *)v1 + 0x0) + (v2 << 2)) = 0.0f;
        v2 = (int)(v2 + 1);
    }
    o->f384 = 0;
    o->f388 = 0;
    o->f2c = -1;
    o->f2e = -1;
}
