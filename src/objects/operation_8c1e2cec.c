typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    char unknown6a[0x6];
    Arg0_70 *f70;
};
struct Arg0_70 {
    char unknown0[0x10];
    int f10;
};
extern void call_8c04beb4(Arg0_70 *);
extern void call_8c04bd00(void *);
void operation_8c1e2cec(Object *o)
{
    if (((o->f68 & 4)) != 0) {
        o->f68 &= -5;
        return;
    }
    call_8c04beb4((Arg0_70 *)(o->f70));
    if (((o->f68 & 2)) != 0 && o->f70->f10 == 0) {
        call_8c04bd00((void *)(((char *)o + 0x8c)));
        o->f70 = (Arg0_70 *)((char *)o + 0x74);
        o->f68 &= -0x27;
    }
}
