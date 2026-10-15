typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct Frame Frame;
typedef struct Arg0_f0 Arg0_f0;
class Object;
typedef struct Block_frame_4 {
    char unknown0[0xc];
    float f0c;
    float f10;
    char unknown14[0x18];
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
    char unknown1c[0xc8];
    int fe4;
    float fe8;
    float fec;
    Arg0_f0 *ff0;
} ObjectData;
struct Frame {
    Block_frame_4 f04;
};
struct Arg0_f0 {
    char unknown0[0xc];
    float f0c;
    float f10;
};
extern "C" void operation_8c051eb8(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *operation_8c1c16dc(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    Object **home = &o;
    (void)home;
    operation_8c051eb8((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c275b18;
    o->v6(a2);
    ((ObjectData *)o)->fe4 = 0;
    ((ObjectData *)o)->fe8 = 0.0f;
    ((ObjectData *)o)->fec = 0.0f;
    ((ObjectData *)o)->ff0 = (Arg0_f0 *)a3;
    *(Block44 *)&(&frame)->f04 = *(Block44 *)&*(Block44 *)0x8c289050;
    (&frame)->f04.f0c = ((ObjectData *)o)->ff0->f0c;
    (&frame)->f04.f10 = ((ObjectData *)o)->ff0->f10;
    copy_actor_records((void *)o, (void *)(&(&frame)->f04), 1);
    attach_and_insert_object((void *)o);
    return o;
}
