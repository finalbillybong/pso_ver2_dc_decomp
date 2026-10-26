typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x4];
    float f04;
};
struct Arg2 {
    char unknown0[0x4];
    float f04;
};
struct Arg1 {
    char unknown0[0x4];
    float f04;
};
int operation_8c199e14(Object *o, Arg1 *a1, Arg2 *a2)
{
    if (o->f04 < a2->f04 || 0.0f > a1->f04) {
        a1->f04 = 0.0f;
        return 1;
    }
    if ((o->f04 - a2->f04) < a1->f04) {
        a1->f04 = o->f04 - a2->f04;
        return 1;
    }
    return 0;
}
