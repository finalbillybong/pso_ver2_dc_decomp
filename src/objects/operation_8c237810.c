typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block160 {
    int words[40];
} Block160;
typedef struct Frame Frame;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
struct Frame {
    Block160 f00;
};
struct S_g8c4db9e4 {
    char unknown0[0x11c4];
    Block160 f11c4;
};
extern S_g8c4db9e4 *g_8c4db9e4;
extern int g_8c510ba0;
extern int g_8c510ba4;
extern int g_8c510ba8;
extern char g_8c33a2dc[];
extern int operation_8c01c25c(void);
extern void operation_8c25ff40(void);
extern int operation_8c238554(int);
extern int operation_8c2378c4(void);
extern void operation_8c246574(void);
extern void operation_8c2386c4(int);
void operation_8c237810(void)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    g_8c510ba4 = 0;
    if (g_8c510ba0 == 0) {
        t1 = operation_8c01c25c();
        if (t1 != 0x10) {
            g_8c510ba8 = 0;
            return;
        }
        operation_8c25ff40();
        if (g_8c510ba8 != 0) {
            t2 = operation_8c238554((int)(&frame));
            if (t2 != 0 && g_8c4db9e4 != 0) {
                *(Block160 *)&g_8c4db9e4->f11c4 = *(Block160 *)&(&frame)->f00;
            }
            t3 = operation_8c2378c4();
            g_8c510ba0 = (int)(t3);
            g_8c510ba4 = 1;
            operation_8c246574();
            operation_8c2386c4((int)(g_8c33a2dc + 0xb));
        }
    }
}
