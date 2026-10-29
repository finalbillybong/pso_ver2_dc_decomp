typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct Block_p0_318 {
    float f00;
    float f04;
    float f08;
} Block_p0_318;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    Vector3 f3c;
    char unknown48[0x2d0];
    Block_p0_318 f318;
    char unknown324[0x6c];
    int f390;
    float f394;
    float f398;
    int f39c;
    int f3a0;
    int f3a4;
    float f3a8;
};
struct Arg2 {
    Vector3 f00;
};
struct Arg3 {
    Vector3 f00;
};
extern int g_8c316e78;
extern void operation_8c012008(void *);
extern int record30_8c1794c8(int);
extern float call_8c37e480(void *);
extern void call_8c37b630(void *);
extern void call_8c05fbf8(int, void *, int, int);
Object *operation_8c161580(Object *o, int a1, Arg2 *a2, Arg3 *a3, int a4)
{
    Object **home = &o;
    float v3;
    float v4;
    float v15;
    int t1;
    float t2;
    (void)home;
    operation_8c012008((void *)o);
    o->dispatch = (void *)0x8c26f62c;
    o->tag = (int)(g_8c316e78);
    o->size = 0x3ac;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a2->f00;
    *(Vector3 *)&o->f318 = *(Vector3 *)&a3->f00;
    o->f390 = a4;
    o->f3a0 = 0;
    o->f3a4 = 0;
    {
        Object *s = o;
        t1 = record30_8c1794c8(0x31);
        s->f3a8 = *(float *)((char *)((char *)t1 + 0x0) + (*(int *)((char *)0x8c316e7c + (s->f390 << 2)) << 2));
    }
    if (0.0f > o->f3a8) {
        o->f3a8 = 0.0f;
    }
    o->f318.f04 = 0.0f;
    t2 = call_8c37e480((void *)(&o->f318));
    if (t2 == 0.0f) {
        o->f318.f00 = 1.0f;
    }
    call_8c37b630((void *)(&o->f318));
    switch (o->f390) {
    case 0:
        call_8c05fbf8(0x3002b, (void *)(&o->f3c), 0, 0);
        v15 = 2.8f;
        o->f394 = 5.0f;
        o->f398 = 1.04166663f;
        o->f39c = 0xc;
        break;
    case 1:
        v15 = 10.0f;
        o->f394 = 5.0f;
        o->f398 = 0.0f;
        o->f39c = 0xc;
        break;
    }
    o->f318.f00 *= v15;
    o->f318.f08 *= v15;
    return o;
}
