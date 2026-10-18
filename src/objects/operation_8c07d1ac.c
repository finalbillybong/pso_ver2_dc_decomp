typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x136];
    unsigned char f136;
    char unknown137[0x5];
    Arg0_13c *f13c;
    char unknown140[0x84];
    int f1c4;
};
struct Arg0_13c {
    char unknown0[0x20];
    short f20;
};
extern int call_8c1931d4(short, unsigned char, unsigned char, int);
void operation_8c07d1ac(Object *o)
{
    unsigned char v1;
    int t1;
    v1 = o->f136;
    if (v1 >= 0x39) {
        v1 = (int)0x39;
    }
    t1 = call_8c1931d4(o->f13c->f20, 2, v1, -1);
    o->f1c4 = (int)(t1);
}
