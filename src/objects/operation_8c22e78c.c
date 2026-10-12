typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41c610 S_g8c41c610;
typedef struct Object Object;
struct S_g8c41c610 {
    char unknown0[0x4];
    short f04;
};
struct Object {
    char unknown0[0x4];
    short f04;
};
extern S_g8c41c610 *g_8c41c610;
extern char g_8c44be18;
extern void call_8c22ce80(void);
void operation_8c22e78c(Object *o)
{
    g_8c44be18 = 1;
    if (g_8c41c610 != 0) {
        g_8c41c610->f04 &= -0x11;
    }
    call_8c22ce80();
    o->f04 |= 1;
}
