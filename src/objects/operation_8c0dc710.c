typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2e];
    int f34;
    char unknown38[0x2c];
    int f64;
};
extern float call_8c2097e4(void);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c0dc710(Object *o)
{
    float t1;
    if (((o->f34 & 1)) != 0) {
        o->f34 &= -5;
        return;
    }
    if (((o->f34 & 2)) != 0) {
        o->f34 |= 4;
        return;
    }
    t1 = call_8c2097e4();
    if (t1 > 0.0f) {
        o->f64 = 0;
    }
    o->f34 |= 3;
    if (((o->f34 & 0x20)) == 0) {
        call_8c05fbf8(0x50003, 0, 0, 0);
    }
    o->f04 &= -0x11;
}
