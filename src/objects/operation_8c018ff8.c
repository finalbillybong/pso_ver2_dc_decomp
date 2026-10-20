typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block160 {
    int words[40];
} Block160;
typedef struct Frame Frame;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_vv1 S_vv1;
struct Frame {
    char unknown0[0x4];
    Block160 f04;
    short fa4;
    short fa6;
    short fa8;
    short faa;
    short fac;
    short fae;
    short fb0;
    char unknownb2[0x2];
    int fb4;
    int fb8;
    int fbc;
    char unknownc0[0x14];
};
struct S_vv1 {
    char unknown0[0x11ac];
    volatile unsigned short f11ac;
    volatile unsigned short f11ae;
    volatile unsigned short f11b0;
    volatile unsigned short f11b2;
    volatile unsigned short f11b4;
    volatile unsigned short f11b6;
    volatile unsigned short f11b8;
    char unknown11ba[0x2];
    int f11bc;
    int f11c0;
    Block160 f11c4;
};
extern S_g8c418a00 *g_8c418a00;
extern S_g8c4db9e0 *g_8c4db9e0;
extern S_g8c4db9e4 *g_8c4db9e4;
extern void call_8c12b880(void *, int, int);
extern int operation_8c2097a8(int);
extern void call_8c253650(void *, void *);
extern void call_8c02edf8(void *, void *, Frame *, void *);
void operation_8c018ff8(void)
{
    Frame frame;
    S_vv1 *v1;
    int t1;
    v1 = (S_vv1 *)g_8c4db9e4;
    call_8c12b880((void *)(&(&frame)->fbc), 0, 0x18);
    t1 = operation_8c2097a8(0x40000);
    if (t1 != 0) {
        (&frame)->fbc = 1;
    } else {
        (&frame)->fbc = 0;
    }
    call_8c253650((void *)((int)v1 + 0x128c), (void *)(&(&frame)->fbc));
    call_8c12b880((void *)(&frame), 0, 0xbc);
    *(Block160 *)&(&frame)->f04 = *(Block160 *)&v1->f11c4;
    (&frame)->fa4 = v1->f11ac & 0xffff;
    (&frame)->fa6 = v1->f11ae & 0xffff;
    (&frame)->fa8 = v1->f11b0 & 0xffff;
    (&frame)->faa = v1->f11b2 & 0xffff;
    (&frame)->fac = v1->f11b4 & 0xffff;
    (&frame)->fae = v1->f11b6 & 0xffff;
    (&frame)->fb0 = v1->f11b8 & 0xffff;
    (&frame)->fb4 = (int)(v1->f11bc);
    (&frame)->fb8 = (int)(v1->f11c0);
    call_8c02edf8(g_8c418a00, g_8c4db9e0, (Frame *)((&frame)), (void *)(&(&frame)->fbc));
}
