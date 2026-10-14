typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    Block_p0_3c f3c;
    char unknown48[0x9c];
    int fe4;
    char unknowne8[0x8];
    float ff0;
    int ff4;
};
struct Arg1 {
    Block_p0_3c f00;
};
extern void operation_8c051eb8(void *, void *);
extern void copy_actor_records(void *, void *, int);
extern float distance_xz_root(void *, void *);
Object *operation_8c15a900(Object *o, Arg1 *a1, int a2)
{
    Object **home = &o;
    float t1;
    (void)home;
    operation_8c051eb8((void *)o, (void *)(*(S_g8c44be94 **)0x8c44be94));
    o->dispatch = (void *)0x8c26ee44;
    o->tag = (int)(*(int *)0x8c3165d4);
    o->size = 0xf8;
    copy_actor_records((void *)o, (void *)((void *)0x8c3165a8), 1);
    o->f3c = a1->f00;
    t1 = distance_xz_root((void *)(&o->f3c), (void *)((void *)0x8c4d9b64));
    if (60.0f > t1) {
        o->f3c.f04 = 90.0f;
    } else {
        o->f3c.f04 = 90.0f - (t1 - 60.0f) * 0.333333343f;
    }
    o->ff0 = o->f3c.f04;
    o->fe4 = 0;
    o->ff4 = a2;
    return o;
}
