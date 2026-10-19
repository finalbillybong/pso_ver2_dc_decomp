typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x10];
    int f10;
};
extern int g_8c44be90;
int operation_8c02a70c(Object *o)
{
    int v1;
    v1 = (int)0;
    if (o != 0) {
        v1 = (int)0;
        if (o->f10 == g_8c44be90) {
            v1 = (int)1;
        }
    }
    return (int)(v1);
}
