typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Arg1 {
    float f00;
    float f04;
};
struct Object {
    char unknown0[0x38];
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
};
struct Arg2 {
    float f00;
    float f04;
};
int operation_8c0dc5c0(Object *o, Arg1 *a1, Arg2 *a2)
{
    int v1;
    float c;
    float y;
    if (!(a1->f00 < (o->f38 + o->f40))) {
        return 0;
    }
    if (!(o->f48 < (a1->f00 + a2->f00))) {
        return 0;
    }
    y = a1->f04;
    c = o->f3c;
    if (!(y < (c + o->f44))) {
        return 0;
    }
    v1 = (int)((y + a2->f04) > c);
    return (int)(v1);
}
