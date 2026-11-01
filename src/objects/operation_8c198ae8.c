typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
};
struct Frame {
    float f04;
    float f08;
    float f0c;
};
extern int g_8c31c9e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TBoss1DragonColli_C_ctor_8c198920(int, Object *, int, void *, float);
Object *TBoss1DragonColli_ctor_8c198ae8(Object *o, int a1)
{
    Frame frame;
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c272914;
    o->tag = (int)(g_8c31c9e0);
    o->size = 0x2c;
    (&frame)->f04 = 0.0f;
    (&frame)->f08 = 0.0f;
    (&frame)->f0c = 0.0f;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xf0);
    if (t1 != 0) {
        TBoss1DragonColli_C_ctor_8c198920(t1, o, 1, (void *)(&(&frame)->f04), 25.0f);
    }
    o->f20 = (int)(t1);
    (&frame)->f04 = -4.0f;
    (&frame)->f08 = 0.0f;
    (&frame)->f0c = 40.0f;
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xf0);
    if (t2 != 0) {
        TBoss1DragonColli_C_ctor_8c198920(t2, o, 3, (void *)(&(&frame)->f04), 10.0f);
    }
    o->f24 = (int)(t2);
    (&frame)->f04 = -4.0f;
    (&frame)->f08 = 0.0f;
    (&frame)->f0c = -100.0f;
    t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xf0);
    if (t3 != 0) {
        TBoss1DragonColli_C_ctor_8c198920(t3, o, 5, (void *)(&(&frame)->f04), 10.0f);
    }
    o->f28 = (int)(t3);
    return o;
}
