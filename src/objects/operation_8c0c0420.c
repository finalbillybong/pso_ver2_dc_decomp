typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x84];
    int f390;
    int f394;
    char unknown398[0x4];
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
};
void operation_8c0c0420(Object *o)
{
    if (o->f30a != 5) {
        o->f39c = o->f30a;
        o->f390 = 5;
    }
    o->f39c = (int)(o->f394);
    o->f394 = 5;
    o->f3a4 |= 1;
}
