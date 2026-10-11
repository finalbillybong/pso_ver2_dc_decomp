typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x22c];
    float f318;
    float f31c;
    float f320;
};
void set_fields_8c1ea4a8(Object *o)
{
    o->fe8 &= -0x101;
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
}
