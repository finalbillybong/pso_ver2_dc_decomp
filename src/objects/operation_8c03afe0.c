typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
struct Object {
    char unknown0[0x184];
    Arg0_184 *f184;
};
struct Arg0_184 {
    char unknown0[0x18];
    int f18;
};
int operation_8c03afe0(Object *o)
{
    int v2;
    v2 = 0;
    if (o->f184 != 0) {
        v2 = o->f184->f18;
        if (!(v2 >= 0)) {
            v2 = 0;
        } else if (*(int *)0x8c4703c0 == 3) {
            if (v2 > 0x1d) {
                v2 = 0x1d;
            }
        } else if (v2 > 0xe) {
            v2 = 0xe;
        }
    }
    return v2;
}
