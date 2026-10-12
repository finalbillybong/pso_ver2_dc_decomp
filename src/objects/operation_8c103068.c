typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x138];
    int f138;
};
extern float distance_xz(void *, void *);
int operation_8c103068(Object *o, int a1)
{
    int v1;
    float t1;
    t1 = distance_xz((void *)a1, (void *)((int)o + o->f138 * 0x28 + 0x98));
    v1 = (int)(422500.0f > t1);
    return v1;
}
