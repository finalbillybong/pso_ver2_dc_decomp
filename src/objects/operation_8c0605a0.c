typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c41cb60 S_g8c41cb60;
struct Frame {
    int f00;
};
extern char g_8c2fc700;
extern S_g8c41cb60 *g_8c41cb60;
extern int g_8c467a44;
extern int g_8c467a58;
extern int g_8c467a6c;
extern void call_8c379038(void *);
extern int call_8c37908a(Frame *);
extern void call_8c34609c(int);
extern void call_8c37904a(void);
extern void call_8c060660(void);
extern void call_8c0606ac(void);
void operation_8c0605a0(void)
{
    Frame frame;
    int v1;
    int v2;
    int v3;
    int v8;
    int t1;
    g_8c467a6c = g_8c467a44 = -0x1e;
    call_8c379038(g_8c41cb60);
    v1 = (int)0xffff;
    v3 = (int)0;
    goto L_8c0605c6;
    v2 = (int)0;
L_8c0605c0:;
    v3 = (int)(v2 + 1);
    if (!(v2 > v1)) {
        v3 = (int)(v2 + 1);
L_8c0605c6:;
        t1 = call_8c37908a((Frame *)((&frame)));
        v2 = (int)v3;
        if (t1 != 0) {
            goto L_8c0605c0;
        }
    }
    if ((&frame)->f00 == 0) {
        g_8c2fc700 = 1;
        call_8c34609c(1);
    } else {
        g_8c2fc700 = 0;
        call_8c34609c(0);
    }
    call_8c37904a();
    if (g_8c2fc700 == 0) {
        v8 = (int)-0x3c;
        g_8c467a44 += v8;
        g_8c467a6c -= 0x3c;
    }
    g_8c467a58 = -0xa;
    call_8c060660();
    call_8c0606ac();
}
