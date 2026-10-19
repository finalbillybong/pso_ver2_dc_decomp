typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
};
extern int g_8c418244;
int operation_8c02afc0(Object *o, int a1)
{
    int v1;
    v1 = (int)((g_8c418244 & a1) == o->f20);
    return (int)(v1);
}
