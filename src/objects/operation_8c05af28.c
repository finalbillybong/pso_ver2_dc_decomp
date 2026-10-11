typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x39c];
    int f39c;
    int f3a0;
};
int operation_8c05af28(Object *o, int a1)
{
    int v1;
    int v3;
    v3 = (int)1;
    if (!(o->f39c >= a1)) {
        v1 = (int)1;
        if (!(o->f3a0 >= a1)) {
            v1 = (int)0;
        }
        v3 = (int)v1;
    }
    return v3;
}
