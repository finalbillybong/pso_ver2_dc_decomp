typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30];
    int f30;
    char unknown34[0xc];
    float f40;
};
extern int operation_8c09b33c(void);
void operation_8c0975b0(Object *o)
{
    int t1;
    switch (o->f30) {
    case 3:
    case 4:
    case 5:
    case 6:
        if (!(0.0f > (o->f40 += -0.166666672f))) {
            return;
        }
        o->f40 = 0.0f;
        return;
    default:
        o->f40 += 0.00833333377f;
        t1 = operation_8c09b33c();
        if (t1 != 0) {
            o->f40 += (1.0f - o->f40) * 0.25f;
        }
        if (o->f40 > 1.0f) {
            o->f40 = 1.0f;
        }
        return;
    }
}
