typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0xc];
    int f10;
    int f14;
    char unknown18[0x4];
    int f1c;
};
void operation_8c1e5f2c(Object *o, int a1)
{
    int v1;
    v1 = o->f1c;
    if (o->f1c == a1) {
        o->f10 = -1;
        return;
        v1 = -1;
    }
    if (v1 > a1) {
        o->f10 = -0x881701;
    } else {
        o->f10 = -0x2273bf;
    }
    o->f14 = 0x1e;
    o->tag |= 4;
    o->f1c = a1;
}
