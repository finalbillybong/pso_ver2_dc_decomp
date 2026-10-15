typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_54 S_g8c46fe20_54;
typedef struct S_g8c4db40c S_g8c4db40c;
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
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4db40c *g_8c4db40c;
extern int g_8c4db428;
extern void request_resource_release(void *);
extern int operation_8c217894(void);
extern void operation_8c217904(int, int, int);
void operation_8c16d5e0(int a0)
{
    int t1;
    if (g_8c4db40c != 0) {
        request_resource_release(g_8c4db40c);
    }
    t1 = operation_8c217894();
    g_8c4db40c = (S_g8c4db40c *)(int)(t1);
    operation_8c217904(t1, a0, 3);
    g_8c4db428 = 4;
    if (g_8c46fe20 != 0) {
        g_8c46fe20->f20 |= 0x80;
    }
    if (g_8c46fe20 != 0) {
        g_8c46fe20->f20 |= 2;
    }
    if (g_8c46fe20 != 0 && g_8c46fe20->f54 != 0) {
        g_8c46fe20->f54->f22 |= 8;
    }
    if (g_8c46fe20 != 0) {
        g_8c46fe20->f20 |= 0x10;
    }
}
