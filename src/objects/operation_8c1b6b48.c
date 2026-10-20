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
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0xe];
    short f30;
    char unknown32[0x36a];
    int f39c;
};
struct Frame {
    Object *f00;
    Block_frame_4 f04;
};
extern int g_8c4e2288;
extern Block64 g_8c4e2290;
extern int create_context_actor_8c1b0b10(void *);
extern void operation_8c177748(int);
extern void operation_8c1ae010(void *, int);
void operation_8c1b6b48(Object *o)
{
    Frame frame;
    int t1;
    *(int *)((char *)o + 0x39c) -= 1;
    if (!(o->f39c >= 0)) {
        (&frame)->f00 = o;
        *(Block64 *)&(&frame)->f04 = *(Block64 *)&g_8c4e2290;
        (&frame)->f04.f08 = 1;
        (&frame)->f04.f00 = o->f30 + 0x1ff;
        (&frame)->f04.f06 = o->f20 + 0x1ff;
        t1 = create_context_actor_8c1b0b10((void *)(&frame));
        g_8c4e2288 = (int)(t1);
        operation_8c177748(0x34);
        operation_8c1ae010((void *)o, 8);
    }
}
