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
    char unknown3ac[0x4];
    int f3b0;
    char unknown3b4[0x4];
    int f3b8;
    int f3bc;
    char unknown3c0[0x20];
    int f3e0;
};
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
};
extern int call_8c21c694(int, void *, void *);
extern void call_8c1b47bc(Object *, Frame *);
extern void operation_8c1ae0d8(void *, int);
extern void operation_8c1b4c9c(void *);
void operation_8c1b4b0c(Object *o)
{
    Frame frame;
    int v2;
    int v4;
    int v5;
    int v7;
    int v6;
    int t1;
    int t2;
    switch (o->f3b0) {
    case 1:
        if (o->f330 <= o->f3e0) {
            t1 = call_8c21c694(3, (void *)((void *)0x8c326e10), (void *)((void *)0x8c326e1c));
            v2 = (int)t1;
        } else {
            t2 = call_8c21c694(2, (void *)((void *)0x8c326e28), (void *)((void *)0x8c326e30));
            v2 = (int)t2;
        }
        switch (v2) {
        case 8:
        case 9:
            call_8c1b47bc(o, (Frame *)((&frame)));
            o->f3b8 = (int)(((&frame)->f00 + 235.0f) / 29.375f);
            o->f3bc = (int)(((&frame)->f08 + 235.0f) / 29.375f);
            if (o->f394 == 0) {
                return;
            }
            v4 = (int)(o->f3b0 & 3);
            v5 = (int)(o->f3a8 & 3);
            operation_8c1ae0d8((void *)(o->f394), (int)(v4 << 8 | (v2 & 0xf | v5 << 4 | v5 << 6) | v4 << 0xa | (o->f3b8 & 0xf) << 0xc | (o->f3bc & 0xf) << 0x10));
            return;
        }
        if (o->f394 == 0) {
            return;
        }
        v6 = (int)(o->f3b0 & 3);
        v7 = (int)(o->f3a8 & 3);
        operation_8c1ae0d8((void *)(o->f394), (int)(v7 << 6 | (v7 << 4 | 0xa) | v6 << 8 | v6 << 0xa | (o->f3b8 & 0xf) << 0xc | (o->f3bc & 0xf) << 0x10));
        return;
    }
    operation_8c1b4c9c((void *)o);
}
