typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c053d84 {
    char unknown0[0x324];
    Block_frame_0 f324;
};
struct Object {
    char unknown0[0x94];
    Arg0_94 *f94;
};
struct Arg0_94 {
    char unknown0[0x328];
    float f328;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern int call_8c011214(void *, Frame *, int);
int operation_8c10ed20(Object *o, int a1)
{
    Frame frame;
    int v1;
    S_c8c053d84 *t1;
    int t2;
    t1 = lookup_object_by_id((unsigned short)a1);
    (&frame)->f00 = t1->f324;
    (&frame)->f00.f04 = o->f94->f328;
    t2 = call_8c011214(((char *)o->f94 + 0x324), (&frame), 0x2100);
    v1 = (int)(t2 == 0);
    return v1;
}
