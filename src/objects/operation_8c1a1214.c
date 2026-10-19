typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern float call_8c047b24(Object *, int, int, Block8);
float operation_8c1a1214(Object *o, int a1, int a2, Block8 a3)
{
    if (o->f30a != 0) {
        return call_8c047b24(o, a1, a2, a3);
    }
    return 0.0f;
}
