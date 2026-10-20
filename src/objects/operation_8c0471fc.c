typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x16e];
    short f1a6;
    char unknown1a8[0x6];
    short f1ae;
    char unknown1b0[0x110];
    int f2c0;
    float f2c4;
    int f2c8;
    char unknown2cc[0x80];
    int f34c;
};
void operation_8c0471fc(Object *o)
{
    switch (o->f2c0) {
    case 0x10:
        o->f1ae += (int)((float)o->f1a6 * -o->f2c4);
        o->f34 = (unsigned int)o->f34 >> 2 << 2;
        o->f34c = o->f34 & 0x3f;
        o->f2c0 = 0;
        o->f2c4 = 0.0f;
        o->f2c8 = 0;
        break;
    }
}
