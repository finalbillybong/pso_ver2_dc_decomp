typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db520 S_g8c4db520;
struct S_g8c4db520 {
    char unknown0[0x4];
    short f04;
};
extern int g_8c2fff78;
extern int g_8c44be20;
extern int g_8c469c44;
extern int g_8c469d68;
extern int g_8c470480;
extern S_g8c4db520 *g_8c4db520;
extern int g_8c4dc800;
extern void call_8c1031e4(void);
extern void operation_03cf00(void);
extern void call_8c0b4bac(void);
extern void operation_194d14(void);
extern void call_8c1922a0(void);
extern void call_8c111268(void);
extern void clear_global_8c1bded0(void);
extern void call_8c159194(void);
void operation_8c0e8148(void)
{
    call_8c1031e4();
    operation_03cf00();
    call_8c0b4bac();
    operation_194d14();
    call_8c1922a0();
    call_8c111268();
    if (g_8c4db520 != 0) {
        g_8c4db520->f04 |= 1;
    }
    clear_global_8c1bded0();
    call_8c159194();
    g_8c4dc800 = 0;
    g_8c470480 = 0;
    g_8c469c44 = 0;
    g_8c2fff78 = 1;
    g_8c469d68 = 0;
    g_8c44be20 = 0;
}
