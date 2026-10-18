typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xa4];
    int fa4;
    int fa8;
};
extern int operation_8c257e3c(int, unsigned int);
int operation_8c1e1b64(Object *o, int a1, int a2)
{
    int v1;
    int t1;
    int t2;
    t1 = operation_8c257e3c(a1, (unsigned int)0x45);
    t2 = operation_8c257e3c(a2, (unsigned int)0x45);
    v1 = 0x50 - ((int)o->fa8 - (int)o->fa4);
    v1 += -3;
    v1 -= t1;
    v1 += -3;
    v1 -= t2;
    v1 += -1;
    v1 = (int)(v1 >= 0);
    return (int)(v1);
}
