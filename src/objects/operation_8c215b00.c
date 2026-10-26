typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Object Object;
typedef struct Block_p0_74 {
    float f00;
    float f04;
} Block_p0_74;
typedef struct Block_p0_38 {
    float f00;
    float f04;
} Block_p0_38;
struct Object {
    char unknown0[0x38];
    Block_p0_38 f38;
    float f40;
    float f44;
    char unknown48[0x10];
    int f58;
    char unknown5c[0x18];
    Block_p0_74 f74;
};
void operation_8c215b00(Object *o, int a1)
{
    *(Block8 *)&o->f38 = *(Block8 *)&o->f74;
    o->f58 = a1;
    if (0.0f > o->f74.f00) {
        o->f38.f00 -= o->f40;
    }
    if (0.0f > o->f74.f04) {
        o->f38.f04 -= o->f44;
    }
}
