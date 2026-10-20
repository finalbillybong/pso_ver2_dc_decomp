typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    Vector3 f18;
};
struct S_vv1 {
    Vector3 f00;
};
struct Object {
    char unknown0[0x460];
    Vector3 f460;
    char unknown46c[0xb4];
    Vector3 f520;
    Vector3 f52c;
};
extern void call_8c05afe0(Object *, Frame *);
void operation_8c1446c4(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    v1 = (S_vv1 *)((char *)o + 0x460);
    frame.f00 = o->f460;
    frame.f0c = o->f520;
    frame.f18 = o->f52c;
    call_8c05afe0(o, (Frame *)((&frame)));
}
