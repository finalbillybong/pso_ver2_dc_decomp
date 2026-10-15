typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_418 Arg0_418;
typedef struct Arg0_s404 Arg0_s404;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0xd4];
    int f3e0;
};
struct Arg0_s404 {
    char unknown0[0x14];
    Arg0_418 *f14;
};
struct Arg0_418 {
    char unknown0[0x20];
    int f20;
};
void operation_8c0d4ec0(Object *o)
{
    if (o->f30a != 1 && o->f30a != 9 && ((o->f3e0 & 0x80000)) == 0) {
        return;
    }
    ((void (*)(void *))(((Arg0_s404 *)((char *)o + 0x404))->f14->f20))((void *)(((char *)o + 0x404)));
}
