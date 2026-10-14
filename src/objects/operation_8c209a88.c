typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_1c4 Arg0_1c4;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xc];
    int f38;
    char unknown3c[0x188];
    Arg0_1c4 *f1c4;
    int f1c8;
    int f1cc;
    int f1d0;
    int f1d4;
};
extern void call_8c193134(void *);
void operation_8c209a88(Object *o)
{
    if ((int)(o->f1c4) != -1) {
        call_8c193134((void *)(o->f1c4));
        o->f1c4 = (Arg0_1c4 *)-1;
        o->f38 = 0;
        o->f28 = 0;
        o->f1d4 = 0;
        o->f1c8 = 0;
        o->f1cc = 0;
        o->f1d0 = 0;
    }
}
