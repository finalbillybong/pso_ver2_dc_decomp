typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x18];
    float f3c;
};
struct Frame {
    Block8 f00;
};
struct Arg0_20 {
    char unknown0[0x34];
    int f34;
};
extern Block8 g_8c3011cc;
extern void operation_195990(int, void *, float, float);
extern void operation_195a84(float);
extern void operation_195b44(void *, float);
extern void operation_195c84(float);
void operation_8c099bbc(Object *o)
{
    Frame frame;
    float v4;
    float v3;
    v4 = (float)o->f3c;
    v3 = (float)(v4 * v4);
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c3011cc;
    operation_195990(0x14, (void *)(&frame), -1.6f, v3);
    operation_195a84(o->f3c);
    if (((o->f20->f34 & 0x10)) == 0) {
        operation_195b44((void *)(((char *)o->f20 + 0x42)), o->f3c);
    }
    operation_195c84(o->f3c);
}
