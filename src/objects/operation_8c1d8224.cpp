typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
class S_frame_4;
typedef struct Block_frame_8 {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x1c];
} Block_frame_8;
typedef struct Block_frame_34 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_34;
struct Frame {
    S_frame_4 *f04;
    Block_frame_8 f08;
    Block_frame_34 f34;
};
class S_frame_4 {
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
typedef struct S_frame_4Data {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xc8];
    int fe4;
    float fe8;
} S_frame_4Data;
struct S_vv1 {
    char unknown0[0xdc];
    int fdc;
    char unknowne0[0x4];
    int fe4;
};
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    Vector3 f3c;
    char unknown48[0x9c];
    int fe4;
    char unknowne8[0x4];
    int fec;
    int ff0;
    int ff4;
};
extern "C" void operation_8c051eb8(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" int create_effect_769c(void *, int);
extern "C" Object *operation_8c1d8224(Object *o, int a1, int a2)
{
    Frame frame;
    Object **home = &o;
    S_vv1 *v1;
    int t1;
    int t2;
    (void)home;
    (&frame)->f04 = (S_frame_4 *)o;
    operation_8c051eb8((void *)o);
    *(void **)((char *)(&frame)->f04 + 0x18) = (void *)(void *)0x8c277164;
    (&frame)->f04->v6(a2);
    ((S_frame_4Data *)(&frame)->f04)->fe4 = 0;
    v1 = (S_vv1 *)(&frame)->f04;
    if (*(int *)((char *)0x8c4e2edc + (v1->fe4 << 2)) != 0) {
        *(Block44 *)&(&frame)->f08 = *(Block44 *)&*(Block44 *)0x8c289460;
        (&frame)->f08.f0c = 13.0f;
        copy_actor_records((void *)v1, (void *)(&(&frame)->f08), 1);
        attach_and_insert_object((void *)((&frame)->f04));
    } else {
        v1->fdc = 0;
    }
    ((S_frame_4Data *)(&frame)->f04)->fe8 = 0.0f;
    o->dispatch = (void *)(void *)0x8c277120;
    o->tag = (int)(*(int *)0x8c32a2f0);
    o->size = 0xf8;
    o->fec = 0;
    if (*(int *)((char *)0x8c4e2edc + (o->fe4 << 2)) != 0) {
        *(Vector3 *)&(&frame)->f34 = *(Vector3 *)&o->f3c;
        (&frame)->f34.f04 += 4.0f;
        t1 = create_effect_769c((void *)(&(&frame)->f34), 0x90);
        o->ff0 = (int)t1;
        *(Vector3 *)&(&frame)->f34 = *(Vector3 *)&o->f3c;
        (&frame)->f34.f04 += 25.0f;
        t2 = create_effect_769c((void *)(&(&frame)->f34), 0x91);
        o->ff4 = (int)t2;
    } else {
        o->ff0 = 0;
        o->ff4 = 0;
    }
    return o;
}
