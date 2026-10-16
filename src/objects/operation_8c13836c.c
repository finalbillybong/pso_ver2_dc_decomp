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
    char unknown38[0x2b8];
    int f2f0;
    float f2f4;
    int f2f8;
    char unknown2fc[0xe];
    short f30a;
    char unknown30c[0x84];
    int f390;
    char unknown394[0x4];
    int f398;
};
extern void call_8c138424(Object *);
void operation_8c13836c(Object *o)
{
    char *v12;
    v12 = (char *)o->f34;
    if ((((int)(v12) & 0x800)) != 0) {
        o->f04 |= 1;
        return;
    }
    if ((((int)(v12) & 0x4000)) != 0) {
        if (--o->f2f8 <= 0) {
            o->f2f0 = 0;
            o->f2f4 = 0.0f;
            o->f2f8 = 0;
            o->f34 &= -0x4001;
        }
        return;
    }
    if (o->f390 != o->f30a) {
        if (o->f398 != -1) {
            o->f398 = -1;
            call_8c138424(o);
        }
        o->f30a = o->f390;
        o->f398 = 0;
    }
    call_8c138424(o);
}
