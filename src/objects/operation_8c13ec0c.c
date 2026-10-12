typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c46ed80 S_g8c46ed80;
typedef struct Object Object;
struct Object {
    char unknown0[0x18c];
    int f18c;
};
struct S_g8c46ed80 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c44be98 {
    char unknown0[0x4];
    short f04;
};
extern char g_8c44be18;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c46ed80 *g_8c46ed80;
extern void call_8c0a21a4(void);
extern void release_render_mode(void);
extern void call_8c13ec8c(Object *);
extern void set_global_8c1086e4(void);
void operation_8c13ec0c(Object *o)
{
    if (((o->f18c & 1)) == 0) {
        call_8c0a21a4();
        release_render_mode();
        g_8c44be18 = 1;
        if (g_8c46ed80 != 0) {
            g_8c46ed80->f04 &= -0x11;
        }
        call_8c13ec8c(o);
        set_global_8c1086e4();
    }
    if (g_8c44be98 != 0) {
        g_8c44be98->f04 &= -0x11;
    }
}
