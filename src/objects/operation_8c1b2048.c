typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
    char unknown3a4[0x44];
    int f3e8;
    char unknown3ec[0x4];
    float f3f0;
    char unknown3f4[0x28];
    int f41c;
};
void operation_8c1b2048(Object *o)
{
    o->f3f0 = 0.0f;
    o->f3e8 += 1;
    o->f3a0 = (int)(o->f41c);
}
