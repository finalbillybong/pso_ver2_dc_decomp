typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
    int f04;
    int f08;
    float f0c;
    float f10;
    char f14;
    char unknown15[0x3];
};
struct Object {
    float tag;
    char unknown4[0x4];
    float f08;
};
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
};
extern S_L8c41cba0 g_8c41cba0;
extern void call_8c05fbf8(int, Object *, int, int);
extern void operation_8c0368a8(void *);
void operation_8c236e64(Object *o, int a1, int a2)
{
    Frame frame;
    (&frame)->f00 = 0x79;
    (&frame)->f01 = 6;
    (&frame)->f04 = a2;
    (&frame)->f08 = a1;
    (&frame)->f0c = o->tag;
    (&frame)->f10 = o->f08;
    if ((((&g_8c41cba0)->f20 & 4)) != 0) {
        call_8c05fbf8(0x10011, o, 0, 0);
        (&frame)->f14 = 1;
    } else {
        call_8c05fbf8(0x20000, o, 0, 0);
        (&frame)->f14 = 0;
    }
    operation_8c0368a8((void *)(&frame));
}
