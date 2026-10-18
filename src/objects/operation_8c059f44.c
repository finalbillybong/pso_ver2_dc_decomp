typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_0 {
    int f00;
    char unknown4[0xc];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    Block16 tag;
};
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, Frame *, int, int, int);
int operation_8c059f44(Object *o, int a1)
{
    Frame frame;
    int t1;
    *(Block16 *)&(&frame)->f00 = *(Block16 *)&o->tag;
    (&frame)->f00.f00 = a1;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (Frame *)((&frame)), 0, 0, 0);
    }
    return (int)(t1);
}
