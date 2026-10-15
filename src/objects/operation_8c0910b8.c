typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4c0];
    float f4c0;
    float f4c4;
    float f4c8;
    float f4cc;
    int f4d0;
};
void operation_8c0910b8(Object *o)
{
    o->f4d0 = (unsigned char)(unsigned int)(o->f4c0 * 255.0f * 0.8f) << 0x18 | (unsigned char)(unsigned int)(o->f4c4 * 255.0f) << 0x10 | (unsigned char)(unsigned int)(o->f4c8 * 255.0f) << 8 | (unsigned char)(unsigned int)(o->f4cc * 255.0f);
}
