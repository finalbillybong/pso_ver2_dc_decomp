typedef struct Rec {
    int f00;
    float f04;
    int f08;
} Rec;
extern Rec g_8c4d9c6c[32];
extern int g_8c4d9dec;
void operation_8c13f258(void)
{
    int i;
    int m;
    int n;
    int off;
    g_8c4d9dec = 0;
    m = 0xffff;
    n = -1;
    for (i = 0; i < 0x20; i++) {
        off = i * 0xc;
        *(int *)((char *)g_8c4d9c6c + off) = m;
        *(float *)((char *)&g_8c4d9c6c[0].f04 + off) = 0.0f;
        *(int *)((char *)&g_8c4d9c6c[0].f08 + off) = n;
    }
}
