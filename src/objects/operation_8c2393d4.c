typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x13];
    char f13;
};
void operation_8c2393d4(Object *o, int a1)
{
    int v3;
    if (a1 < 0 || a1 > 0x63) {
        v3 = (int)0;
    } else {
        v3 = (int)a1;
    }
    o->f13 = v3;
}
