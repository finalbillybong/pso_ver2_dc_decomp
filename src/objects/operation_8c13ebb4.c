typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c46ed80 S_g8c46ed80;
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
extern void call_8c13e8f8(void);
extern void call_8c13ec80(int);
extern void clear_global_8c1086f0(void);
void operation_8c13ebb4(int a0)
{
    call_8c13e8f8();
    g_8c44be18 = 0;
    if (g_8c46ed80 != 0) {
        g_8c46ed80->f04 |= 0x10;
    }
    call_8c13ec80(a0);
    clear_global_8c1086f0();
    if (g_8c44be98 != 0) {
        g_8c44be98->f04 |= 0x10;
    }
}
