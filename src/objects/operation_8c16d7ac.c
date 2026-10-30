typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_54 S_g8c46fe20_54;
typedef struct S_g8c4db430 S_g8c4db430;
typedef struct S_vv19 S_vv19;
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x32];
    S_g8c46fe20_54 *f54;
};
struct S_g8c46fe20_54 {
    char unknown0[0x22];
    short f22;
};
struct S_vv19 {
    char unknown0[0x20];
    unsigned short f20;
};
extern int g_8c467870;
extern int g_8c467874;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4db430 *g_8c4db430;
void operation_8c16d7ac(void)
{
    int end;
    int v17;
    S_vv19 *v19;
    int v20;
    int lim;
    int v15;
    int v16;
    int v21;
    char *v18;
    int v14;
    int pm1;
    if (g_8c46fe20 != 0) {
        g_8c46fe20->f20 &= -3;
    }
    if (g_8c46fe20 != 0 && g_8c46fe20->f54 != 0) {
        g_8c46fe20->f54->f22 &= -9;
    }
    if (g_8c46fe20 != 0) {
        g_8c46fe20->f20 &= -0x11;
    }
    if (0x64 > (int)(g_8c4db430)) {
        ((void ( *) ( void *))0x8c0ddd64)(g_8c4db430);
        return;
    }
    lim = 0x4000;
    v14 = (int)g_8c467874;
    end = v14 + g_8c467870;
    v15 = (int)0x3c8;
    pm1 = 0x10c;
    v16 = (int)pm1;
    pm1 = (int)v14;
    v17 = pm1;
    v18 = (char *)g_8c4db430;
    while (end > v17) {
        v19 = (S_vv19 *)*(S_g8c467240 **)((char *)0x8c467240 + (v17 << 2));
        if (v19 != 0) {
            v20 = v19->f20;
            if (lim > v20) {
                v21 = (int)*(int *)((char *)((char *)v19 + 0x0) + (v15));
            } else {
                v21 = (int)*(int *)((char *)((char *)v19 + 0x0) + (v16));
            }
            if (v21 == (int)(v18)) {
                ((void ( *) ( unsigned short ))0x8c0ddd64)(v20);
                return;
            }
        }
        v17 = (int)(v17 + 1);
    }
}
