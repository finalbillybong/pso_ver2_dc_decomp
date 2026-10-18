typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
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
    char unknown3b4[0x4];
    int f3b8;
    int f3bc;
};
struct Frame {
    int f00;
    int f04;
};
extern void call_8c1b4b0c(Object *);
extern void operation_8c1b46d8(void *, void *, void *);
extern void operation_8c1ae0d8(void *, int);
void operation_8c1b5c08(Object *o)
{
    int v1;
    int v2;
    Frame frame;
    if (o->f3a0 == 0) {
        if (o->f3b0 == 1) {
            call_8c1b4b0c(o);
            return;
        }
        operation_8c1b46d8((void *)o, (void *)(&frame), (void *)(&(&frame)->f04));
        v2 = (&frame)->f04;
        v1 = (&frame)->f00;
        if (o->f394 != 0) {
            operation_8c1ae0d8((void *)(o->f394), (int)((v1 & 3) << 6 | ((o->f3a8 & 3) << 4 | 2) | (o->f3b0 & 3) << 8 | (v2 & 3) << 0xa | (o->f3b8 & 0xf) << 0xc | (o->f3bc & 0xf) << 0x10));
        }
    }
}
