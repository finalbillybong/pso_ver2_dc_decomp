typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
struct Object {
    char tag;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
void operation_8c0ddef0(Object *o)
{
    if (*(int *)0x8c46fe20 != 0 && o->tag >= 0 && !(o->tag >= 4)) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 &= ~(0x400 << o->tag);
        o->tag = -1;
    }
}
