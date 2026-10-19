typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct S_frame_c S_frame_c;
typedef struct Object Object;
typedef struct Block_p0_0 {
    unsigned char f00;
    char unknown1[0x13];
} Block_p0_0;
typedef struct Block_frame_0 {
    char unknown0[0xc];
    S_frame_c *f0c;
    char unknown10[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    Block_p0_0 tag;
};
extern void call_8c1c9730(Frame *);
extern int call_8c1c9bb0(Frame *);
extern void operation_1954bc(int);
int operation_8c1631c8(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    if (o != 0) {
        *(Block20 *)&(&frame)->f00 = *(Block20 *)&o->tag;
        call_8c1c9730((Frame *)((&frame)));
        t1 = call_8c1c9bb0((Frame *)((&frame)));
        if (t1 != 0) {
            unsigned char k = o->tag.f00;
            if ((unsigned int)5 > (unsigned int)(unsigned char)k) {
                v1 = (int)*(int *)((char *)0x8c317330 + (k << 2));
                if (v1 != 0) {
                    operation_1954bc((int)((&frame)->f00.f0c));
                    t2 = ((int (*)(Frame *))(v1))((Frame *)((&frame)));
                    return (int)(t2);
                }
            }
        }
    }
    return 0;
}
