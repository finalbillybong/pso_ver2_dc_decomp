typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x368];
    int f368;
};
int operation_8c12a10c(Object *o, int a1)
{
    int v2;
    int v1;
    int v3;
    v1 = (int)o->f368;
    v2 = (int)0;
    while (v2 != v1) {
        v3 = (int)*(int *)((char *)((char *)o + 0x358) + (v2 << 2));
        if (v3 == a1) {
            return 1;
        }
        v2 = (int)(v2 + 1);
    }
    return 0;
}
