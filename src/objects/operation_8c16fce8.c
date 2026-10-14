typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void *g_8c4db4d8;
extern char g_8c4db4dc;
extern char g_8c318c08[];
extern void call_8c16d30c(int, void *);
void operation_8c16fce8(void)
{
    if (g_8c4db4dc == 0) {
        g_8c4db4d8 = (g_8c318c08 + 0x18);
        g_8c4db4dc = 1;
    }
    call_8c16d30c(0, g_8c4db4d8);
}
