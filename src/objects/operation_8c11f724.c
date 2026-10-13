typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c2e72d8 S_g8c2e72d8;
typedef struct Object Object;
struct Object {
    char unknown0[0xf0];
    short ff0;
};
struct S_g8c2e72d8 {
    short f00;
};
void operation_8c11f724(Object *o, int a1)
{
    if (a1 == 0 || a1 != 1) {
        o->ff0 = (*(S_g8c2e72d8 **)0x8c2e72d8)->f00;
        return;
    }
    o->ff0 = *(short *)0x8c2e72e0;
}
