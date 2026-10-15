typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x8];
    int f2c;
    int f30;
    Arg0_34 *f34;
    char unknown38[0x24];
    int f5c;
    int f60;
    char unknown64[0x4];
    int f68;
    int f6c;
};
struct Arg0_34 {
    char unknown0[0x4];
    int f04;
};
void operation_8c13f8e0(Object *o)
{
    int v1;
    o->f5c = (int)(o->f34->f04);
    if (o->f5c <= 0 || o->f5c > 8) {
        return;
    }
    v1 = (int)0;
    while (8 > v1) {
        *(int *)((char *)((char *)o + 0x3c) + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    o->f20 = 0;
    o->f30 = 0;
    o->f60 = 0;
    o->f2c = 0;
    o->f68 = 0x14fa;
    o->f6c = 0;
}
