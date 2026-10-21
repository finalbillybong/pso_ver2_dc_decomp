typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_394 Arg0_394;
struct Object {
    char unknown0[0x330];
    short f330;
    char unknown332[0x62];
    Arg0_394 *f394;
    char unknown398[0x10];
    int f3a8;
    char unknown3ac[0x8];
    int f3b4;
    int f3b8;
    char unknown3bc[0x10];
    unsigned short f3cc;
    char unknown3ce[0x26];
    int f3f4;
};
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
};
extern int operation_8c1ae23c(void);
extern int call_8c21c694(int, void *, void *);
extern void call_8c1b1884(Object *, Frame *);
extern void operation_8c1ae0d8(void *, int);
void operation_8c1b1ab0(Object *o)
{
    Frame frame;
    int v4;
    int v26;
    int v27;
    int v28;
    int t1;
    t1 = operation_8c1ae23c();
    if (o->f330 <= o->f3f4 && (unsigned short)t1 != 0xffff) {
        v4 = call_8c21c694(4, (void *)((void *)0x8c326698), (void *)((void *)0x8c3266a8));
    } else {
        v4 = call_8c21c694(3, (void *)((void *)0x8c3266b8), (void *)((void *)0x8c3266c4));
    }
    switch (v4) {
    case 6:
    case 7:
        call_8c1b1884(o, (Frame *)((&frame)));
        o->f3b4 = (int)(((&frame)->f00 + 235.0f) / 29.375f);
        o->f3b8 = (int)(((&frame)->f08 + 235.0f) / 29.375f);
        if (o->f394 == 0) {
            return;
        }
        v26 = (int)(o->f3a8 >> 0xc & 0xf);
        operation_8c1ae0d8((void *)(o->f394), (int)(v4 & 0xf | v26 << 4 | v26 << 8 | (o->f3b4 & 0xf) << 0xc | (o->f3b8 & 0xf) << 0x10 | (o->f3cc & 0xffff & 0xf) << 0x14));
        return;
    case 13:
        if (o->f394 == 0) {
            return;
        }
        v27 = (int)(o->f3a8 >> 0xc & 0xf);
        operation_8c1ae0d8((void *)(o->f394), (int)(v4 & 0xf | v27 << 4 | v27 << 8 | (o->f3b4 & 0xf) << 0xc | (o->f3b8 & 0xf) << 0x10 | ((unsigned short)t1 & 0xf) << 0x14));
        return;
    }
    if (o->f394 != 0) {
        v28 = (int)(o->f3a8 >> 0xc & 0xf);
        operation_8c1ae0d8((void *)(o->f394), (int)(v4 & 0xf | v28 << 4 | v28 << 8 | (o->f3b4 & 0xf) << 0xc | (o->f3b8 & 0xf) << 0x10 | (o->f3cc & 0xffff & 0xf) << 0x14));
    }
}
