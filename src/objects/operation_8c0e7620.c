typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c308030 S_L8c308030;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
    char unknown8[0x8];
    int f10;
};
struct Frame {
    int f00;
    char unknown4[0x8];
};
struct S_L8c308030 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c44be04;
extern int g_8c44be08;
extern S_L8c308030 g_8c308030;
extern int call_8c1a9a00(void *, Frame *);
void operation_8c0e7620(Object *o)
{
    Frame frame;
    int t1;
    g_8c44be04 = (int)(o->f04);
    g_8c44be08 = (int)(o->f10);
    t1 = call_8c1a9a00((void *)(o->f04), (Frame *)((&frame)));
    if (t1 != 0) {
        ((void (*)(void))(*(int *)((char *)&g_8c308030.f04 + ((&frame)->f00 * 0xc))))();
        return;
    }
    ((void (*)(void))(*(int *)((char *)&g_8c308030.f04 + ((int)(o->f04) * 0xc))))();
}
