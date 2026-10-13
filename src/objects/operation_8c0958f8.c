typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469e24 S_g8c469e24;
typedef struct S_g8c469e28 S_g8c469e28;
typedef struct Object Object;
struct S_g8c469e24 {
    int f00;
};
struct Object {
    char unknown0[0x4d0];
    int f4d0;
};
struct S_g8c469e28 {
    int f00;
};
void operation_8c0958f8(Object *o)
{
    (*(S_g8c469e24 **)0x8c469e24)->f00 = (int)(o->f4d0);
    (*(S_g8c469e28 **)0x8c469e28)->f00 = (int)(o->f4d0);
}
