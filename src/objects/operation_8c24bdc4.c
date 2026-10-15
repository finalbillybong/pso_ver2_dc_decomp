typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c510fc0;
extern void *g_8c510fc4;
extern char g_8c510fc8;
extern char g_8c33e9d4[];
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern void call_8c18ec00(int, int);
extern void operation_8c1cbb08(void *, int);
void operation_8c24bdc4(int a0, int a1, int a2)
{
    if (g_8c510fc8 == 0) {
        g_8c510fc4 = (g_8c33e9d4 + 0xc);
        g_8c510fc8 = 1;
    }
    reset_text_cursor_8c18ea38();
    operation_8c18ea4c((int)g_8c510fc4);
    call_8c18ec00(a1, 2);
    operation_8c18ea4c((int)(g_8c33e9d4 + 0x12));
    call_8c18ec00(a2, 2);
    operation_8c1cbb08((void *)a0, (int)((void *)0x8c4dbe40));
    g_8c510fc0 = a1;
}
