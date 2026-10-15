typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x10];
    int f38;
};
extern int g_8c32c108;
extern int g_8c3403e8;
extern char g_8c4e3130;
extern int g_8c5108c0;
extern void select_mode11_8c1cc5a0(void);
extern void select_mode10_8c1cc588(void);
void operation_8c25c070(Object *o)
{
    int v1;
    float v4;
    v1 = (int)o->f24;
    o->f24 = v1 + 1;
    v4 = (float)(float)(unsigned int)v1;
    if (v4 > 4.5f) {
        if (o->f38 != 0) {
            if (o->f38 == 1) {
                goto L_8c25c0b4;
            }
            if (o->f38 == 2) {
                goto L_8c25c0d8;
            }
            return;
        }
        g_8c5108c0 = 1;
        select_mode11_8c1cc5a0();
        return;
L_8c25c0b4:;
        if (g_8c3403e8 == 0) {
            g_8c32c108 = 0;
        }
        g_8c3403e8 = 1;
        g_8c5108c0 = 2;
        select_mode11_8c1cc5a0();
        return;
L_8c25c0d8:;
        g_8c4e3130 = 2;
        select_mode10_8c1cc588();
    }
}
