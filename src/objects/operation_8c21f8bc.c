typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_74 Arg0_74;
typedef struct Arg0_78 Arg0_78;
struct Object {
    char unknown0[0x68];
    char f68;
    char unknown69[0xb];
    Arg0_74 *f74;
    Arg0_78 *f78;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Arg0_74 {
    int f00;
};
struct Arg0_78 {
    int f00;
};
extern S_L8c41cba0 g_8c41cba0;
void operation_8c21f8bc(Object *o)
{
    if (((o->f68 & 4)) != 0) {
        if ((((&g_8c41cba0)->f28 & 0x10000)) != 0) {
            if (o->f74->f00 != 0) {
                o->f74->f00 = 0;
            } else {
                o->f74->f00 = 1;
            }
        }
        if ((((&g_8c41cba0)->f28 & 0x20000)) != 0) {
            if (o->f78->f00 != 0) {
                o->f78->f00 = 0;
                return;
            }
            o->f78->f00 = 1;
        }
    }
}
