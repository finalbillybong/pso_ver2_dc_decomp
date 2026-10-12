typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_4 S_vv1_4;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Arg1 {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
};
struct S_vv1_4 {
    Block_frame_0 f00;
    Vector3 f0c;
};
struct Arg2 {
    Vector3 f00;
};
extern int g_8c418248;
extern int call_8c011308(Frame *, void *, int);
int operation_8c051ff4(Object *o, Arg1 *a1, Arg2 *a2)
{
    Frame frame;
    S_vv1 *v1;
    int t1;
    int t2;
    (&frame)->f00 = a1->f00;
    (&frame)->f00.f04 += 10.0f;
    if (o->f20 == g_8c418248) {
        t1 = call_8c011308((&frame), ((char *)o + 0x94), 0x55);
        v1 = (S_vv1 *)t1;
    } else {
        t2 = call_8c011308((&frame), ((char *)o + 0x94), 0x15);
        v1 = (S_vv1 *)t2;
    }
    if (v1 == 0) {
        return 0;
    }
    a1->f00 = v1->f04->f00;
    if (a2 != 0) {
        a2->f00 = v1->f04->f0c;
    }
    return 1;
}
