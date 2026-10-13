typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c417760 S_g8c417760;
typedef struct S_g8c417760_0 S_g8c417760_0;
typedef struct S_g8c44be40 S_g8c44be40;
typedef struct S_g8c4dc5e0 S_g8c4dc5e0;
struct Frame {
    char unknown0[0x20];
};
struct S_g8c417760 {
    S_g8c417760_0 *f00;
};
extern S_g8c417760 *g_8c417760;
extern int g_8c44be2c;
extern S_g8c44be40 *g_8c44be40;
extern S_g8c4dc5e0 *g_8c4dc5e0;
extern char g_8c2e8428[];
extern void call_8c03ef04(Frame *, int, void *);
extern int call_8c104d50(Frame *);
extern int current_effect_mode(void);
extern int call_8c011e9c(void *);
extern int call_8c105380(Frame *, int);
extern void call_8c1a198c(void *, void *);
extern void call_8c03ef80(void *, ...);
void operation_8c030acc(int a0)
{
    Frame frame;
    char *v2;
    int t1;
    int t2;
    int t3;
    int t4;
    g_8c44be2c = 0;
    g_8c417760 = (S_g8c417760 *)0;
    call_8c03ef04((Frame *)((&frame)), a0, (void *)((g_8c2e8428 + 0x6)));
    t1 = call_8c104d50((Frame *)((&frame)));
    g_8c44be40 = (S_g8c44be40 *)(int)(t1);
    if (t1 > 0) {
        t2 = current_effect_mode();
        if (t2 == 0xf) {
            v2 = (char *)g_8c44be40;
            if ((int)(v2) > 0x8000) {
                g_8c44be40 = (S_g8c44be40 *)0;
                return;
            }
            g_8c44be40 = (S_g8c44be40 *)0x8000;
        }
        t3 = call_8c011e9c(g_8c44be40);
        g_8c44be2c = (int)(t3);
        if (t3 != 0) {
            t4 = call_8c105380((Frame *)((&frame)), t3);
            g_8c417760 = (S_g8c417760 *)(int)(t4);
        }
        if (g_8c417760 != 0 && g_8c4dc5e0 != 0) {
            call_8c1a198c(g_8c4dc5e0, (void *)(g_8c417760->f00));
            return;
        }
        call_8c03ef80((void *)((g_8c2e8428 + 0xc)));
    }
}
