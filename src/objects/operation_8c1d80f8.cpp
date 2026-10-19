typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct Frame Frame;
class Object;
typedef struct Block_frame_4 {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x1c];
} Block_frame_4;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int);
};
typedef struct ObjectData {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xc0];
    int fdc;
    char unknowne0[0x4];
    int fe4;
    float fe8;
} ObjectData;
struct Frame {
    Block_frame_4 f04;
};
extern Block44 g_8c289460;
extern "C" void operation_8c051eb8(void *);
extern "C" int call_8c1d8210(Object *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *operation_8c1d80f8(Object *o, int a1, int a2, int a3, float f0)
{
    Frame frame;
    Object **home = &o;
    int t1;
    (void)home;
    operation_8c051eb8((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c277164;
    o->v6(a2);
    ((ObjectData *)o)->fe4 = a3;
    t1 = call_8c1d8210(o);
    if (t1 != 0) {
        *(Block44 *)&(&frame)->f04 = *(Block44 *)&g_8c289460;
        (&frame)->f04.f0c = f0;
        copy_actor_records((void *)o, (void *)(&(&frame)->f04), 1);
        attach_and_insert_object((void *)o);
    } else {
        ((ObjectData *)o)->fdc = 0;
    }
    ((ObjectData *)o)->fe8 = 0.0f;
    return o;
}
