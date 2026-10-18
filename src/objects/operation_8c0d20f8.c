typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x74896 S_x74896;
struct Object {
    char unknown0[0x410];
    int f410;
};
struct S_x74896 {
    int f00;
};
void operation_8c0d20f8(Object *o)
{
    ((S_x74896 *)((char *)(int *)((char *)o + 0x434) + (o->f410 << 2)))->f00 &= -3;
}
