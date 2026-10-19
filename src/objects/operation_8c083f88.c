typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x358];
    float f358;
};
extern float squared_distance_xyz(void *, void *);
int operation_8c083f88(Object *o, int a1)
{
    int v1;
    float t1;
    t1 = squared_distance_xyz((void *)(a1 + 0x3c), (void *)(((char *)o + 0x3c)));
    v1 = (int)(o->f358 > t1);
    return (int)(v1);
}
