typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
struct S_g8c46fe20 {
    char unknown0[0x6c];
    int f6c;
};
extern int g_8c418248;
extern S_g8c46fe20 *g_8c46fe20;
extern char g_8c3375d4[];
extern void operation_8c22596c(int);
extern int operation_8c225c84(int);
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern void operation_8c18ecb8(void);
extern void operation_8c2258e4(int);
extern void operation_8c225ad4(int, int);
void operation_8c225840(int a0, int a1)
{
    int v10;
    int t1;
    if ((unsigned short)a0 == g_8c418248) {
        operation_8c22596c(a1);
    }
    t1 = operation_8c225c84(a0);
    reset_text_cursor_8c18ea38();
    if (t1 != 0) {
        operation_8c18ea4c(t1);
        operation_8c18ecb8();
        operation_8c18ea4c((int)(g_8c3375d4 + 0x12));
        operation_8c18ecb8();
    }
    operation_8c18ea4c(a1);
    a1 = (int)(void *)0x8c4dbe40;
    operation_8c2258e4(a1);
    if (g_8c46fe20 == 0) {
        v10 = (int)0;
    } else {
        v10 = (int)g_8c46fe20->f6c;
    }
    if (v10 != 0) {
        operation_8c225ad4(v10, a1);
    }
}
