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
    char unknown3ac[0x4];
    int f3b0;
    char unknown3b4[0xc];
    unsigned short f3c0;
    unsigned short f3c2;
};
extern int call_8c1b8888(Object *);
extern float object_random_fraction(void *);
extern void operation_8c1ae0d8(void *, int);
void operation_8c1b8e28(Object *o)
{
    float t1;
    int t2;
    int v1;
    if (o->f3a0 == 0) {
        t2 = call_8c1b8888(o);
        t1 = object_random_fraction((void *)o);
        v1 = (int)(t1 * 2.97f) + 4;
        if (o->f394 != 0) {
            operation_8c1ae0d8((void *)(o->f394), (int)(v1 & 0x1f | (o->f3a8 & 0x1f) << 5 | (t2 & 0x1f) << 0xa | (o->f3b0 & 0xf) << 0xf | (t2 & 0xf) << 0x13 | (o->f3c0 & 0xffff & 0xf) << 0x17 | (o->f3c2 & 0xffff & 0xf) << 0x1b));
        }
    }
}
