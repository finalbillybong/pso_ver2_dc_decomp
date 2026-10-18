typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xfd];
    char ffd;
};
extern int g_8c44be04;
extern int g_8c510ba0;
int operation_8c2474a4(Object *o)
{
    int v1;
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 == 0 || o->ffd != g_8c44be04) {
        return 1;
    }
    return 0;
}
