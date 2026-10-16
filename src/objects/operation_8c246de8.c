typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern int lookup_low_id(int);
extern void call_8c37f6f0(Frame *, int);
extern float call_8c37e480(Frame *);
float operation_8c246de8(Object *o)
{
    Frame frame;
    int t1;
    float t2;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 == 0) {
        return 65536.0f;
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
    call_8c37f6f0((Frame *)((&frame)), (int)(t1 + 0x3c));
    (&frame)->f00.f04 = 0.0f;
    t2 = call_8c37e480((Frame *)((&frame)));
    return t2;
}
