typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3dc];
    int f3dc;
    char unknown3e0[0x2ec];
    int f6cc;
};
int operation_8c144c60(Object *o)
{
    int v1;
    int v3;
    v3 = (int)0;
    if (o->f6cc <= 0) {
        v1 = (int)0;
        if (((o->f3dc & 4)) == 0) {
            v1 = (int)1;
        }
        v3 = (int)v1;
    }
    return v3;
}
