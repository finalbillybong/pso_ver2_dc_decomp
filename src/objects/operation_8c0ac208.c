typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x26];
    int f2c;
};
extern void create_effect_777c(void *, int);
void operation_8c0ac208(Object *o)
{
    o->f2c += 1;
    if (o->f2c == 0xa) {
        create_effect_777c((void *)(((char *)o + 0x30)), 0x38);
    }
    if (o->f2c > 0xc8) {
        o->f04 |= 1;
    }
}
