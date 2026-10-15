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
    float f00;
};
struct Object {
    char unknown0[0x738];
    int f738;
};
extern int operation_8c05bbf8(void);
extern void call_8c067d9c(Object *, int, Frame *, int);
extern void call_8c05b338(Object *, int, Frame *, int);
void operation_8c067c1c(Object *o, int a1, int a2)
{
    Frame frame;
    int t1;
    *(Block20 *)&(&frame)->f00 = *(Block20 *)&*(Block20 *)0x8c2fd318;
    (&frame)->f00.f04 = (*(S_g8c46891c **)0x8c46891c)->f00;
    (&frame)->f00.f00 = (int)(o->f738);
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        call_8c067d9c(o, a1, (Frame *)((&frame)), a2);
        return;
    }
    call_8c05b338(o, a1, (Frame *)((&frame)), a2);
}
