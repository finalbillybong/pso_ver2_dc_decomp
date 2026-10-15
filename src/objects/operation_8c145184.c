typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    Vector3 tag;
};
extern char g_8c46ee84[];
extern void create_effect(void *, int, int);
void operation_8c145184(Object *o, float f0, float f1)
{
    Frame frame;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->tag;
    (&frame)->f00.f00 -= *(float *)(g_8c46ee84 + 0xc) * f1;
    (&frame)->f00.f04 -= *(float *)(g_8c46ee84 + 0x10) * f1 - f0;
    (&frame)->f00.f08 -= *(float *)(g_8c46ee84 + 0x14) * f1;
    create_effect((void *)(&frame), 0x127, 0x40);
}
