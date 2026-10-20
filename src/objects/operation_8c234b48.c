typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    char f3c;
    char f3d;
};
struct S_L8c41cba0 {
    char unknown0[0xa0];
    int fa0;
};
extern S_L8c41cba0 g_8c41cba0;
void operation_8c234b48(Object *o)
{
    char v1;
    char v6;
    v1 = o->f3d;
    v6 = o->f3c;
    if (g_8c41cba0.fa0 & 0x10) {
        v6 = v6 - 1;
        if (v6 < 0) {
            v6 = v1 - 1;
        }
    } else if (g_8c41cba0.fa0 & 0x20) {
        v6 = v6 + 1;
        if (v6 >= v1) {
            v6 = 0;
        }
    }
    o->f3c = v6;
}
