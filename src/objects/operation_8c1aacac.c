typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_84 Arg0_84;
typedef struct Arg0_88 Arg0_88;
typedef struct Block_p0_58 {
    char unknown0[0x4];
    float f04;
    float f08;
} Block_p0_58;
typedef struct Block_p0_68 {
    char unknown0[0x4];
    float f04;
    float f08;
} Block_p0_68;
struct Object {
    char unknown0[0x34];
    int f34;
    Vector3 f38;
    int f44;
    Vector3 f48;
    char unknown54[0x4];
    Block_p0_58 f58;
    char unknown64[0x4];
    Block_p0_68 f68;
    char unknown74[0x10];
    Arg0_84 *f84;
    Arg0_88 *f88;
};
struct Arg0_84 {
    Vector3 f00;
};
struct Arg0_88 {
    Vector3 f00;
};
void operation_8c1aacac(Object *o)
{
    o->f34 = 0;
    *(Vector3 *)&o->f38 = *(Vector3 *)&o->f84->f00;
    *(Vector3 *)&o->f58 = *(Vector3 *)&o->f84->f00;
    o->f58.f04 -= 7.07f;
    o->f58.f08 += 7.07f;
    o->f44 = 0;
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f88->f00;
    *(Vector3 *)&o->f68 = *(Vector3 *)&o->f88->f00;
    {
        float d = 7.07f;
        o->f68.f04 -= d;
        o->f68.f08 += d;
    }
}
