typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block64 {
    int words[16];
} Block64;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_4 {
    short f00;
    char unknown2[0x4];
    short f06;
    short f08;
    char unknowna[0x36];
} Block_frame_4;
struct Frame {
    Object *f00;
    Block_frame_4 f04;
};
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0xe];
    short f30;
    char unknown32[0x36a];
    int f39c;
};
extern int g_8c4e2284;
extern Block64 g_8c4e2290;
extern int create_context_actor_8c1b35e0(void *);
extern void operation_8c1ada78(Object *);
void operation_8c1b69e8(Object *o)
{
    Frame frame;
    int t1;
    (&frame)->f00 = o;
    *(Block64 *)&(&frame)->f04 = *(Block64 *)&g_8c4e2290;
    (&frame)->f04.f08 = 1;
    (&frame)->f04.f00 = o->f30 + 0x200;
    (&frame)->f04.f06 = o->f20 + 0x200;
    t1 = create_context_actor_8c1b35e0((void *)(&frame));
    g_8c4e2284 = (int)(t1);
    o->f39c = 0;
    operation_8c1ada78(o);
}
