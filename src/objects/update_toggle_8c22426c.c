typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_8c Arg0_8c;
struct Object {
    char unknown0[0x71];
    char f71;
    char unknown72[0xe];
    int f80;
    char unknown84[0x8];
    Arg0_8c *f8c;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Arg0_8c {
    int f00;
};
extern S_L8c41cba0 g_8c41cba0;
void update_toggle_8c22426c(Object *o)
{
    if (o->f71 != 0) {
        if (o->f71 == 1) {
            return;
        }
        if (o->f71 != 2) {
            if (o->f71 == 3) {
                return;
            }
            return;
        }
    }
    if ((unsigned int)0xc > (unsigned int)o->f80) {
        if ((((&g_8c41cba0)->f28 & 0x400)) != 0) {
            if (o->f8c->f00 != 0) {
                o->f8c->f00 = 0;
                return;
            }
            o->f8c->f00 = 1;
        }
    }
}
