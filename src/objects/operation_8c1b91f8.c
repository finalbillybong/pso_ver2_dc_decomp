typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_394 Arg0_394;
struct Object {
    char unknown0[0x390];
    int f390;
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
    int f3c4;
};
extern float object_random_fraction(void *);
extern void operation_8c1ae0d8(void *, int);
void operation_8c1b91f8(Object *o)
{
    int v1;
    int r;
    if (o->f3a0 == 0) {
        if (o->f390 == 4) {
            o->f3c4 = 0;
            r = (int)(object_random_fraction((void *)o) * 15.99f);
            if (o->f394 != 0) {
                operation_8c1ae0d8((void *)(o->f394), (int)((r & 0x1f) << 0xa | ((o->f3a8 & 0x1f) << 5 | 0xf) | (o->f3b0 & 0xf) << 0xf | (r & 0xf) << 0x13 | (o->f3c0 & 0xffff & 0xf) << 0x17 | (o->f3c2 & 0xffff & 0xf) << 0x1b));
            }
        } else {
            r = (int)(object_random_fraction((void *)o) * 15.84f);
            v1 = o->f390 - 1;
            if (o->f394 != 0) {
                operation_8c1ae0d8((void *)(o->f394), (int)(v1 & 0x1f | (o->f3a8 & 0x1f) << 5 | (r & 0x1f) << 0xa | (o->f3b0 & 0xf) << 0xf | (r & 0xf) << 0x13 | (o->f3c0 & 0xffff & 0xf) << 0x17 | (o->f3c2 & 0xffff & 0xf) << 0x1b));
            }
        }
    }
}
