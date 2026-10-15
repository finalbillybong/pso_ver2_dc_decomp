typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x138];
    unsigned char f138;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
extern void call_8c3889b4(int, Frame *);
void operation_8c179fe4(Object *o)
{
    Frame frame;
    if (*(int *)0x8c4689f0 == 0 && o->f138 == 3 && *(int *)0x8c4db980 != 0) {
        (&frame)->f08 = 0.0f;
        (&frame)->f04 = 0.0f;
        (&frame)->f00 = 0.0f;
        (&frame)->f14 = 0.0f;
        (&frame)->f10 = 0.0f;
        (&frame)->f0c = 1.0f;
        call_8c3889b4(0, (Frame *)((&frame)));
    }
}
