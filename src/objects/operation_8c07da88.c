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
    char unknown140[0xd8];
    int f218;
    int f21c;
};
struct Arg0_13c {
    char unknown0[0x5c8];
    int f5c8;
};
void operation_8c07da88(Object *o)
{
    int v7;
    if (o->f13c != 0 && o->f13c->f5c8 == 0) {
        v7 = (int)((int)o->f21c - (int)o->f218);
        if (v7 > 0) {
            o->f13c->f5c8 = (int)(v7);
        }
    }
}
