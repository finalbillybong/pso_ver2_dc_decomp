typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
struct Object {
    int tag;
    char unknown4[0x14];
    int dispatch;
    char f1c;
    char f1d;
    char unknown1e[0x2];
    Arg0_20 *f20;
    Arg0_24 *f24;
    int f28;
    int f2c;
    int f30;
    int f34;
};
extern void call_8c18de08(void *);
void operation_8c19f91c(Object *o)
{
    o->f1c = 0x2d;
    o->f1d = 0x2d;
    o->f28 = -1;
    o->f2c = -1;
    o->f30 = -1;
    o->f34 = -1;
    o->dispatch = 0;
    if (o->f24 != 0 && ((o->tag & 0x10)) != 0) {
        call_8c18de08(o->f24);
    }
    o->f24 = (Arg0_24 *)0;
    if (o->f20 != 0 && ((o->tag & 8)) != 0) {
        call_8c18de08(o->f20);
    }
    o->f20 = (Arg0_20 *)0;
    o->tag &= -0xbfe;
}
