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
typedef struct Arg0_5c Arg0_5c;
typedef struct Arg1 Arg1;
typedef struct Block_frame_0 {
    short f00;
    short f02;
    char unknown4[0x2];
    short f06;
    short f08;
    char unknowna[0x36];
} Block_frame_0;
struct Object {
    char unknown0[0x5c];
    Arg0_5c *f5c;
    char unknown60[0xa0];
    void *f100;
    char unknown104[0x4];
    int f108;
    int f10c;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg1 {
    Block64 f00;
};
struct Arg0_5c {
    int f00;
};
extern int g_8c46ed18;
extern int current_effect_mode(void);
extern int advance_counter_8c01d5e8(int);
int operation_8c08fde8(Object *o, Arg1 *a1)
{
    Frame frame;
    int v1;
    int v4;
    int v5;
    int v6;
    char *v7;
    int t1;
    int t2;
    int t3;
    int v8;
    t1 = current_effect_mode();
    if (*(int *)((char *)0x8c2ee8b8 + (t1 << 2)) == 0) {
        o->f100 = (void *)0;
        return 0;
    }
    v1 = (int)*(int *)((char *)0x8c2ee8b8 + (t1 << 2));
    *(Block64 *)&(&frame)->f00 = *(Block64 *)&a1->f00;
    v4 = (int)(&frame)->f00.f02;
    if ((&frame)->f00.f02 == 0) {
        v4 = (int)*(int *)((char *)((char *)v1 + 0xc) + (o->f108 << 4));
    }
    t2 = advance_counter_8c01d5e8(v4);
    (&frame)->f00.f06 = t2;
    v5 = (int)g_8c46ed18;
    if ((v5 + (v4 + 1)) > 0xb4f) {
        v6 = (int)-1;
    } else {
        g_8c46ed18 = v5 + (v4 + 1);
        v6 = (int)v5;
    }
    (&frame)->f00.f00 = v6;
    (&frame)->f00.f08 = o->f5c->f00;
    v8 = o->f108 << 4;
    v7 = (char *)*(int *)((char *)((char *)v1 + 0x4) + v8);
    o->f100 = &*(int *)((char *)((char *)v1 + 0x0) + v8);
    o->f10c = (int)(o->f108);
    t3 = ((int (*)(Frame *))(v7))((Frame *)((&frame)));
    return (int)(t3);
}
