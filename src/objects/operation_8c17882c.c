typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_374 Arg0_374;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x2e8];
    int f350;
    char unknown354[0x20];
    Arg0_374 *f374;
};
struct Arg0_374 {
    char unknown0[0x34];
    int f34;
};
extern void create_effect_777c(void *, int);
void operation_8c17882c(Object *o)
{
    o->f64 += 0x10;
    if (((o->f374->f34 & 0x800)) == 0) {
        if (((o->f374->f34 & 0x20)) != 0) {
            return;
        }
    }
    o->f350 = 2;
    create_effect_777c(((char *)o + 0x3c), 0x153);
}
