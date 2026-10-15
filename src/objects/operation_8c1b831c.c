typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block32 {
    int words[8];
} Block32;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_41c Arg0_41c;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_x13808_0 S_x13808_0;
typedef struct Block_frame_0 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    char unknown1c[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_vv2 {
    S_vv2_0 *f00;
};
struct Object {
    char unknown0[0x3c2];
    unsigned short f3c2;
    char unknown3c4[0x58];
    Arg0_41c *f41c;
};
extern void call_8c0a7608(void *, void *);
void operation_8c1b831c(Object *o)
{
    Frame frame;
    S_vv2 *v2;
    int v3;
    int v1;
    *(Block32 *)&(&frame)->f00 = *(Block32 *)&*(Block32 *)0x8c327c10;
    (&frame)->f00.f00 = (int)(((char *)o + 0x488));
    (&frame)->f00.f04 = (int)(((char *)o + 0x494));
    (&frame)->f00.f08 = (int)(((char *)o + 0x4d0));
    (&frame)->f00.f0c = (int)(((char *)o + 0x4dc));
    (&frame)->f00.f10 = (int)(((char *)o + 0x440));
    (&frame)->f00.f14 = (int)(((char *)o + 0x44c));
    (&frame)->f00.f18 = (int)(((char *)o + 0x458));
    v2 = (S_vv2 *)(&frame);
    v3 = (int)0;
    v1 = (int)0x400;
    while (8 > v3) {
        if (*(int *)((char *)((char *)((int)o + v1) + 0x0) + (v3 << 2)) != 0 && v2->f00 != 0) {
            call_8c0a7608((void *)(*(S_x13808_0 **)((char *)((char *)((int)o + v1) + 0x0) + (v3 << 2))), (void *)(v2->f00));
        }
        v3 = (int)(v3 + 1);
        v2 = (S_vv2 *)((char *)v2 + 4);
    }
    if ((o->f3c2 & 0xffff) == 0xffff) {
        call_8c0a7608((void *)(o->f41c), (void *)((void *)0x8c327c30));
        return;
    }
    call_8c0a7608((void *)(o->f41c), (void *)(((char *)o + 0x47c)));
}
