typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    int f04;
    char unknown8[0x24];
    float f2c;
    float f30;
};
extern float g_8c285be0;
extern char g_8c470760;
int operation_8c0fffd8(Object *o)
{
    int v1;
    v1 = o->f04;
    if (o->f04 == -1) {
        return 1;
        v1 = 1;
    }
    if (7 > v1) {
        return 0;
    }
    if (g_8c470760 == 0) {
        g_8c285be0 = o->f2c - 1.0f;
        g_8c470760 = 1;
    }
    if (o->f30 == g_8c285be0) {
        return 1;
    }
    return 0;
}
