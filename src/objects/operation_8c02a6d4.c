typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x10];
    int f10;
    char unknown14[0x33c];
    int f350;
};
extern int g_8c44be90;
int operation_8c02a6d4(Object *o)
{
    int v5;
    int v2;
    int v1;
    v5 = 0;
    v2 = 0;
    if (o != 0) {
        v1 = (int)(((o->f350 & 4)) != 0);
        if (v1 == 0) {
            v2 = 1;
        }
    }
    if (v2 != 0) {
        if (o->f10 == g_8c44be90) {
            v5 = 1;
        }
    }
    return v5;
}
