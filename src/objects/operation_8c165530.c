typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct S_g8c4da280 S_g8c4da280;
typedef struct S_g8c4da280_42c S_g8c4da280_42c;
typedef struct S_g8c4da280_42c_8 S_g8c4da280_42c_8;
typedef struct S_g8c4da284 S_g8c4da284;
typedef struct Object Object;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0xc];
} Block_frame_0;
struct Object {
    char unknown0[0x60];
    Arg0_60 *f60;
    Arg0_64 *f64;
    char unknown68[0x44];
    int fac;
    int fb0;
    char unknownb4[0x4];
    float fb8;
};
struct Frame {
    Block_frame_0 f00;
    float f10;
    float f14;
    float f18;
};
struct S_g8c4da280 {
    char unknown0[0x42c];
    S_g8c4da280_42c *f42c;
};
extern Block16 g_8c317434;
extern int g_8c46f560;
extern S_g8c4da280 *g_8c4da280;
extern S_g8c4da284 *g_8c4da284;
extern int g_8c575570;
extern void operation_8c05b9f4(int, int, int, int);
extern void call_8c38c0f0(Frame *);
extern void call_8c38c0e6(int, int);
extern void call_8c37b566(int);
extern void call_8c38ae68(void);
extern void call_8c3827d8(void *);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c37dd28(int, void *);
extern void call_8c3aa716(void *);
extern void call_8c38ad10(void);
void operation_8c165530(Object *o)
{
    Frame frame;
    char *pm1;
    int pm3;
    if (o->fac == 2) {
        (&frame)->f10 = (&frame)->f18 = *(float *)((char *)0x8c2864d0 + (o->fb0 << 2)) * 0.2f;
        (&frame)->f14 = 1.0f;
        operation_8c05b9f4((int)(((char *)o + 0x48)), (int)(((char *)o + 0xa0)), 0, (int)(&(&frame)->f10));
    }
    g_8c46f560 = (int)(g_8c575570);
    if (1.0f > o->fb8) {
        g_8c575570 |= 0x8820;
        {
            Block16 *p_ = (Block16 *)&g_8c317434;
            *(Block16 *)&(&frame)->f00 = *p_;
        }
        (&frame)->f00.f00 = o->fb8 + -1.0f;
        call_8c38c0f0((Frame *)((&frame)));
        call_8c38c0e6(0xff00, 0x800);
        call_8c37b566(0x2500);
    }
    call_8c38ae68();
    call_8c3827d8(g_8c4da284);
    call_8c382a40((void *)(((char *)o + 0x3c)));
    call_8c37df90(0, (void *)(o->f64));
    call_8c37dd28(0, (void *)(o->f60));
    pm1 = (0x8 + (char *)g_8c4da280->f42c);
    call_8c3aa716((void *)(*(S_g8c4da280_42c_8 **)(pm1 + (*(int *)((char *)0x8c2864a0 + (o->fb0 << 2)) << 4))));
    call_8c38ad10();
    pm3 = 0xff00;
    g_8c575570 = (g_8c46f560);
    call_8c38c0e6(pm3, 0);
}
