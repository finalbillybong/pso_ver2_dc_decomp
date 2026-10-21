typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
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
    char unknown3b4[0x4];
    int f3b8;
    int f3bc;
};
struct Frame {
    int f00;
    int f04;
    float f08;
    char unknownc[0x4];
    float f10;
};
extern float object_random_fraction(void *);
extern void operation_8c1b46d8(void *, void *, void *);
extern void operation_8c1ae0d8(void *, int);
extern void call_8c1b47bc(Object *, void *);
void operation_8c1b5e00(Object *o)
{
    Frame frame;
    int v2;
    int v1;
    int v3;
    int a;
    int b;
    float t1;
    switch (o->f3a0) {
    case 0:
        t1 = object_random_fraction((void *)o);
        if (0.5f > t1) {
            operation_8c1b46d8((void *)o, (void *)(&frame), (void *)(&(&frame)->f04));
            v1 = (int)(&frame)->f04;
            v2 = (int)(&frame)->f00;
            if (o->f394 != 0) {
                operation_8c1ae0d8((void *)(o->f394), (int)((v2 & 3) << 6 | ((o->f3a8 & 3) << 4 | 2) | (o->f3b0 & 3) << 8 | (v1 & 3) << 0xa | (o->f3b8 & 0xf) << 0xc | (o->f3bc & 0xf) << 0x10));
            }
            return;
        }
        v3 = (int)8;
        if (o->f390 == 8) {
            v3 = (int)9;
        }
        call_8c1b47bc(o, (void *)(&(&frame)->f08));
        o->f3b8 = (int)(((&frame)->f08 + 235.0f) / 29.375f);
        o->f3bc = (int)(((&frame)->f10 + 235.0f) / 29.375f);
        if (o->f394 != 0) {
            a = o->f3b0 & 3;
            b = o->f3a8 & 3;
            operation_8c1ae0d8((void *)(o->f394), (int)(a << 8 | (v3 & 0xf | b << 4 | b << 6) | a << 0xa | (o->f3b8 & 0xf) << 0xc | (o->f3bc & 0xf) << 0x10));
        }
    }
}
