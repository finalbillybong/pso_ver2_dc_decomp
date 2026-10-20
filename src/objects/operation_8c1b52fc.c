typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_394 Arg0_394;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x35c];
    Arg0_394 *f394;
    char unknown398[0x10];
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
};
extern int operation_8c1ae0d8(void *, int);
extern void operation_8c1b46d8(void *, void *, void *);
void operation_8c1b52fc(Object *o)
{
    Frame frame;
    int v2;
    char *v23;
    int v1;
    int a;
    int b;
    if (((o->f34 & 0x800)) != 0) {
        if (o->f394 == 0) {
            return;
        }
        b = o->f3b0 & 3;
        a = o->f3a8 & 3;
        operation_8c1ae0d8((void *)(o->f394), a << 6 | (a << 4 | 4) | b << 8 | b << 0xa | (o->f3b8 & 0xf) << 0xc | (o->f3bc & 0xf) << 0x10);
        return;
    }
    operation_8c1b46d8((void *)o, (void *)(&frame), (void *)(&(&frame)->f04));
    v1 = (int)(&frame)->f04;
    v2 = (int)(&frame)->f00;
    v23 = (char *)o->f394;
    if (v23 != 0) {
        operation_8c1ae0d8((void *)v23, (int)((v2 & 3) << 6 | ((o->f3a8 & 3) << 4 | 2) | (o->f3b0 & 3) << 8 | (v1 & 3) << 0xa | (o->f3b8 & 0xf) << 0xc | (o->f3bc & 0xf) << 0x10));
    }
}
