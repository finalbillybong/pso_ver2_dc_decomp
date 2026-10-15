typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct S_g8c46891c S_g8c46891c;
typedef struct Object Object;
typedef struct Block_frame_0 {
    int f00;
    float f04;
    char unknown8[0xc];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_g8c46891c {
    char unknown0[0x4];
    float f04;
};
struct Object {
    char unknown0[0x738];
    int f738;
};
extern int operation_8c05bbf8(void);
extern void call_8c067d9c(Object *, int, Frame *, int);
extern void call_8c05b3a8(Object *, int, Frame *);
void operation_8c067ca0(Object *o, int a1)
{
    Frame frame;
    int t1;
    *(Block20 *)&(&frame)->f00 = *(Block20 *)&*(Block20 *)0x8c2fd32c;
    (&frame)->f00.f04 = (*(S_g8c46891c **)0x8c46891c)->f04;
    (&frame)->f00.f00 = (int)(o->f738);
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        call_8c067d9c(o, a1, (Frame *)((&frame)), 0);
        return;
    }
    call_8c05b3a8(o, a1, (Frame *)((&frame)));
}
