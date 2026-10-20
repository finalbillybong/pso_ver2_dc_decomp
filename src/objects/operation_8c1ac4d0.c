typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0xc];
    int f2c;
    char unknown30[0x4];
    int f34;
    char unknown38[0x4];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x14];
    int f5c;
    int f60;
};
struct Arg1 {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x1a8];
    int f1d4;
};
extern int g_8c324f8c;
extern int g_8c324fac;
extern void call_8c1aba3c(Object *, Arg1 *, Vector3 *, Vector3 *, float);
extern float call_8c37f6c0(float);
extern float call_8c130334(float, float);
Object *operation_8c1ac4d0(Object *o, Arg1 *a1, Vector3 *a2, Vector3 *a3, float a4)
{
    {
        Object *self = o;
        Object **home = &self;
        (void)home;
        call_8c1aba3c(o, a1, a2, a3, a4);
        self->dispatch = (void *)0x8c2748b4;
        self->tag = g_8c324f8c;
        self->size = 0x64;
        self->f5c = a1->f1d4;
        self->f60 = a1->f28;
        if (self->f40 != 0.0f) {
            self->f2c = -(int)(call_8c130334(self->f40, call_8c37f6c0(self->f3c * self->f3c + self->f44 * self->f44)) * 65536.0f / 6.28318405f);
            self->f34 = 0;
        } else {
            self->f34 = 0;
            self->f2c = 0;
        }
    }
    o->dispatch = (void *)0x8c274854;
    o->tag = g_8c324fac;
    o->size = 0x64;
    return o;
}
