typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4e2edc S_L8c4e2edc;
typedef struct Object Object;
struct S_L8c4e2edc {
    char unknown0[0xc];
    int f0c;
};
struct Object {
    char unknown0[0x64];
    int f64;
};
extern S_L8c4e2edc g_8c4e2edc;
void operation_8c1d8c7c(Object *o)
{
    if ((&g_8c4e2edc)->f0c != 0) {
        o->f64 += 0x40;
    }
}
