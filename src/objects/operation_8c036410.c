typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c461c04 S_L8c461c04;
typedef struct Frame Frame;
typedef struct S_g8c2ed2a0 S_g8c2ed2a0;
typedef struct S_g8c461ae0 S_g8c461ae0;
struct Frame {
    short f00;
    char unknown2[0xa];
    short f0c;
    char unknowne[0xa];
};
struct S_L8c461c04 {
    char unknown0[0x368];
    int f368;
};
extern S_g8c2ed2a0 *g_8c2ed2a0;
extern S_g8c461ae0 *g_8c461ae0;
extern int g_8c461c00;
extern int g_8c462004;
extern int g_8c462008;
extern S_L8c461c04 g_8c461c04;
extern void call_8c3ca534(int, Frame *, int);
extern void operation_8c1fbabc(void);
extern void call_8c1fa26c(int, void *, int);
extern void call_8c1fa29a(void);
extern int call_8c203f84(void *);
extern void call_8c23174e(int);
extern void call_8c204010(void *);
extern void call_8c3ca7b2(int);
extern void call_8c203f44(void);
extern void call_8c23173c(void);
void operation_8c036410(void)
{
    Frame frame;
    int t1;
    if (g_8c461c00 != 0) {
        (&frame)->f00 = 0;
        call_8c3ca534(0x4106, (Frame *)((&frame)), 0);
        if (g_8c462004 != 0) {
            operation_8c1fbabc();
            g_8c462004 = 0;
        }
        if (g_8c462008 == 0) {
            goto L_8c0364b0;
        }
        call_8c1fa26c(0, g_8c461ae0, 3);
        call_8c1fa29a();
        g_8c462008 = 0;
    } else {
        if ((int)(g_8c2ed2a0) != -1 && (&g_8c461c04)->f368 != 0) {
            t1 = call_8c203f84(g_8c2ed2a0);
            if ((short)t1 != -1) {
                do {
                    call_8c23174e(1);
                    call_8c204010((void *)(((char *)(&frame) + 0x4)));
                } while ((&frame)->f0c != 0);
                if (g_8c462004 != 0) {
                    operation_8c1fbabc();
                    g_8c462004 = 0;
                }
                g_8c2ed2a0 = (S_g8c2ed2a0 *)-1;
            }
        }
    }
L_8c0364b0:;
    call_8c3ca7b2(0);
    if (g_8c461c00 == 0) {
        call_8c203f44();
    }
    call_8c23173c();
}
