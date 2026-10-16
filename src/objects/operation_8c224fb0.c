typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
};
struct Object {
    char unknown0[0x82];
    char f82;
    char f83;
};
extern void call_8c2201d0(int, Frame *, int, float, float);
void operation_8c224fb0(Object *o, int a1)
{
    Frame frame;
    (&frame)->f00 = (float)o->f82 * 40.0f + 5.0f - 3.0f;
    (&frame)->f04 = (float)o->f83 * 40.0f + 9.0f - 3.0f;
    call_8c2201d0(a1, (Frame *)((&frame)), a1, 38.0f, 0.1f);
}
