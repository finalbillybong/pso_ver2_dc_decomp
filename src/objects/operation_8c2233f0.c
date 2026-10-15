typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x20];
    int f20;
    Arg0_24 *f24;
    char unknown28[0x4];
    int f2c;
};
void operation_8c2233f0(Object *o, int a1)
{
    if (o->f20 > a1 && *(int *)((char *)((char *)o->f24 + 0x0) + (a1 << 2)) != 0) {
        *(int *)((char *)((char *)o->f24 + 0x0) + (a1 << 2)) -= 1;
        if (*(int *)((char *)((char *)o->f24 + 0x0) + (a1 << 2)) == 0 && o->f2c != 0) {
            ((void (*)(int))(o->f2c))(a1);
        }
    }
}
