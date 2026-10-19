typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x21];
    char f21;
    char f22;
    char f23;
    char unknown24[0x8];
    int f2c;
    int f30;
    int f34;
    float f38;
};
extern int call_8c18e768(int, int);
void operation_8c16b480(Object *o)
{
    int t1;
    int c;
    o->f22 = 0;
    c = o->f21;
    if (c == 0) {
        o->f23 = 1;
    } else {
        o->f23 = c << 2;
    }
    t1 = call_8c18e768(0x10000, (int)(o->f23));
    o->f30 = (int)(t1);
    o->f34 = (int)(o->f2c);
    o->f38 = (float)o->f21 * 6.0f;
}
