typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x3a];
    float f40;
    char unknown44[0x1c];
    int f60;
};
extern void create_effect_777c(void *, int);
void operation_8c1bcdf8(Object *o)
{
    float v1;
    o->f40 += -0.333333343f;
    v1 = (float)o->f40;
    if (0.0f > v1 && !(-0.333333343f > v1)) {
        create_effect_777c((void *)(((char *)o + 0x3c)), 0xf3);
    }
    o->f60 += 0x111;
    if (-13.0f > o->f40) {
        o->f04 |= 1;
    }
}
