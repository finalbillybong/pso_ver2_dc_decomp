typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    short f30c;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern void create_effect_777c(void *, int);
extern void refresh_follow_effect_8c0129f4(void *);
extern void operation_8c09e6d0(void *);
void operation_8c04f478(Object *o)
{
    if (o->f30a != 8) {
        o->f30a = 8;
        o->f30c = 0;
        o->ff0 = 6;
        o->fdc->f18 &= -0x10002;
        create_effect_777c((void *)(((char *)o + 0x324)), 0xf2);
        refresh_follow_effect_8c0129f4((void *)o);
        operation_8c09e6d0((void *)o);
    }
}
