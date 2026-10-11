typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    short f04;
    short f06;
    short f08;
    char unknowna[0x12];
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    int f38;
    int f3c;
    float f40;
    int f44;
    char unknown48[0x58];
    int fa0;
};
void set_fields_8c0daf8c(Object *o)
{
    o->tag = 0;
    o->f04 = 0;
    o->f06 = 0;
    o->f28 = 0.0f;
    o->f24 = 0.0f;
    o->f20 = 0.0f;
    o->f2c = 0.0f;
    o->f30 = 0.0f;
    o->f34 = 0.0f;
    o->f38 = 0;
    o->f3c = 0;
    o->f40 = 0.0f;
    o->f1c = 0.0f;
    o->f08 = 0;
    o->f44 = 0;
    o->fa0 = 0;
}
