typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a8];
    float f3a8;
    char f3ac;
};
int operation_8c13d3b4(Object *o)
{
    switch (o->f3ac) {
    case 0:
        o->f3a8 += 2.9333334f;
        if (!(4.0f > o->f3a8)) {
            o->f3ac = 1;
        }
        break;
    case 1:
        o->f3a8 += -0.666666687f;
        if (!(o->f3a8 > 0.0f)) {
            o->f3a8 = 0.0f;
            return 1;
        }
    }
    return 0;
}
