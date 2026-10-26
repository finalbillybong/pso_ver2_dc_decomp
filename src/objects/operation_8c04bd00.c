typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
struct Object {
    Arg0_0 *tag;
    int f04;
    char unknown8[0x8];
    int f10;
};
struct Arg0_0 {
    short f00;
};
void operation_8c04bd00(Object *o)
{
    o->f04 = 0;
    o->f10 = 0;
    if (o->tag != 0) {
        o->tag->f00 = 0;
    }
}
