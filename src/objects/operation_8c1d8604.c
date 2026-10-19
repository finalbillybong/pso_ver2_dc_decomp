typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct Frame Frame;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Block_frame_4 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_4;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x1c];
    Vector3 f3c;
    char unknown48[0x9c];
    int fe4;
    char unknowne8[0x4];
    int fec;
};
struct Frame {
    Block_frame_4 f04;
};
extern int g_8c32a2f4;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c1d80f8(S_c8c122700 *, void *, int, int, float);
extern int create_effect_769c(void *, int);
S_c8c122700 *operation_8c1d8604(int a0)
{
    Frame frame;
    S_c8c122700 *t1;
    int t2;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0xf0);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        call_8c1d80f8(t1, g_8c44be98, a0, 1, 13.0f);
        self->f18 = (void *)0x8c2770dc;
        self->f00 = (int)(g_8c32a2f4);
        self->f1e = 0xf0;
        if (*(int *)((char *)0x8c4e2edc + (self->fe4 << 2)) != 0) {
            *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&self->f3c;
            (&frame)->f04.f04 += 4.0f;
            t2 = create_effect_769c((void *)(&(&frame)->f04), 0x90);
            self->fec = (int)(t2);
        } else {
            self->fec = 0;
        }
    }
    return t1;
}
