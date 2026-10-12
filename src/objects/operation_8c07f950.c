typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
};
struct Arg0_13c {
    char unknown0[0x310];
    int f310;
};
int operation_8c07f950(Object *o)
{
    int v1;
    int v2;
    int v3;
    int v6;
    v1 = (int)(((o->f13c->f310 & 4)) != 0);
    v6 = (int)1;
    if (v1 == 0) {
        v2 = (int)(((o->f13c->f310 & 0x10)) != 0);
        v3 = (int)1;
        if (v2 == 0) {
            v3 = (int)0;
        }
        v6 = (int)v3;
    }
    return v6;
}
