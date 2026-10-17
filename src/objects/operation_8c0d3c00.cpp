typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fc8c S_g8c46fc8c;
class S_g8c46fc98;
class S_g8c46fc98 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};
typedef struct S_g8c46fc98Data {

} S_g8c46fc98Data;
extern int g_8c46fc84;
extern int g_8c46fc88;
extern S_g8c46fc8c *g_8c46fc8c;
extern int g_8c46fc90;
extern int g_8c46fc94;
extern S_g8c46fc98 *g_8c46fc98;
extern int g_8c575570;
extern "C" void release_render_mode_four_8c05b944(void *, void *);
extern "C" void operation_8c0d3c00(void)
{
    int v1;
    v1 = (int)g_8c46fc84;
    switch (v1) {
    case 2:
        g_8c46fc88 = (int)(g_8c575570);
        g_8c575570 &= -0x8001;
        break;
    case 3:
        g_8c575570 = (int)(g_8c46fc88);
        break;
    case 76:
    case 80:
        release_render_mode_four_8c05b944(g_8c46fc8c, g_8c46fc8c);
        g_8c46fc8c = (S_g8c46fc8c *)((int)g_8c46fc8c + 0xc);
        break;
    case 33:
        if (g_8c46fc90 == 0) {
            goto L_8c0d3cea;
        }
        g_8c46fc98->v6();
        break;
    case 56:
        if (g_8c46fc94 == 0) {
            goto L_8c0d3cea;
        }
        g_8c46fc98->v6();
        break;
    case 50:
        if (g_8c46fc90 == 0) {
            goto L_8c0d3cea;
        }
        g_8c46fc98->v7();
        break;
    case 73:
        if (g_8c46fc94 != 0) {
            g_8c46fc98->v7();
        }
    }
L_8c0d3cea:;
    g_8c46fc84 += 1;
}
