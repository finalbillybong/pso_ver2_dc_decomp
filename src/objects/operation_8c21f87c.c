typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_6c Arg0_6c;
struct Object {
    char unknown0[0x68];
    char f68;
    char unknown69[0x3];
    Arg0_6c *f6c;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Arg0_6c {
    char f00;
};
extern S_L8c41cba0 g_8c41cba0;
void operation_8c21f87c(Object *o)
{
    if (((o->f68 & 2)) != 0) {
        if ((((&g_8c41cba0)->f28 & 0x200)) != 0) {
            o->f6c->f00 += 1;
            if (!(8 > o->f6c->f00)) {
                o->f6c->f00 += -8;
            }
        }
    }
}
