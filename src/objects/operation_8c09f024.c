typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ed6c S_g8c46ed6c;
extern int g_8c46ed60;
extern int g_8c46ed64;
extern int g_8c46ed68;
extern S_g8c46ed6c *g_8c46ed6c;
extern void call_8c011ec0(void *);
void operation_8c09f024(void)
{
    if (g_8c46ed6c != 0) {
        call_8c011ec0(g_8c46ed6c);
        g_8c46ed6c = (S_g8c46ed6c *)0;
        g_8c46ed68 = 0;
        g_8c46ed64 = 0;
        g_8c46ed60 = 0;
    }
}
