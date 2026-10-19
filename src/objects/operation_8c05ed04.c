typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct S_g8c2f1b7c S_g8c2f1b7c;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x4];
    float f30;
};
struct Frame {
    Block16 f00;
};
extern S_g8c2f1b7c *g_8c2f1b7c;
extern Block16 g_8c2f3874;
extern int g_8c46f560;
extern int g_8c575570;
extern void call_8c38c0e6(int, int);
extern void call_8c38c0f0(Frame *);
extern void call_8c37b566(int);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37e2e4(int, float, float, float);
extern void call_8c3aa716(void *);
extern void call_8c38ad10(void);
void operation_8c05ed04(Object *o)
{
    Frame frame;
    float v1;
    int v2;
    int v3;
    v1 = (float)o->f30;
    v1 = (float)(v1 * 0.5f);
    g_8c46f560 = (int)(g_8c575570);
    g_8c575570 |= 0x8810;
    v2 = (int)0xff00;
    v3 = (int)0x800;
    call_8c38c0e6(v2, v3);
    {
        Block16 *p_ = (Block16 *)&g_8c2f3874;
        *(Block16 *)&(&frame)->f00 = *p_;
    }
    call_8c38c0f0((Frame *)((&frame)));
    call_8c37b566(0x1800);
    call_8c38ae68();
    call_8c382a40((void *)(o->f28));
    call_8c37e2e4(0, v1, 1.0f, v1);
    call_8c3aa716(g_8c2f1b7c);
    call_8c38ad10();
    call_8c38c0e6(0xff00, 0);
    g_8c575570 = (int)(g_8c46f560);
}
