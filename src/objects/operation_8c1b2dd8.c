typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_394 Arg0_394;
struct Object {
    char unknown0[0x394];
    Arg0_394 *f394;
    char unknown398[0x8];
    int f3a0;
    char unknown3a4[0x4];
    int f3a8;
    char unknown3ac[0x8];
    int f3b4;
    int f3b8;
    char unknown3bc[0x10];
    unsigned short f3cc;
};
void operation_8c1b2dd8(Object *o)
{
    float t1;
    float t2;
    int v;
    int w;
    if (o->f3a0 == 0) {
        t1 = ((float (*)(Object *))0x8c04aa9c)(o);
        if (0.75f > t1) {
            ((void (*)(Object *))0x8c1b1ab0)(o);
            return;
        }
        t2 = ((float (*)(Object *))0x8c04aa9c)(o);
        v = (int)o->f3a8;
        w = v + ((int)(t2 * 49152.0f) + 0x2000);
        if (o->f394 != 0) {
            ((void (*)(void *, int))0x8c1ae0d8)(o->f394, (w >> 0xc & 0xf) << 8 | ((v >> 0xc & 0xf) << 4 | 4) | (o->f3b4 & 0xf) << 0xc | (o->f3b8 & 0xf) << 0x10 | (o->f3cc & 0xffff & 0xf) << 0x14);
        }
    }
}
