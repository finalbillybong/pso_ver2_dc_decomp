typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    float f70;
    char unknown74[0xc4];
    unsigned char f138;
};
extern float call_8c38d7d8(int, int);
void operation_8c123d48(Object *o)
{
    float t1;
    t1 = call_8c38d7d8((int)((char *)o + 0x11c), (int)((char *)o + 0x3c));
    if (t1 > o->f70 && o->f138 != 4) {
        o->f138 = 3;
    }
}
