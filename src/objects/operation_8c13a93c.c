typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4d9b60;
extern void *g_8c4d9c00;
extern void *g_8c4d9c04;
extern void *g_8c4d9c08;
extern void *g_8c4d9c0c;
extern int g_8c4d9c10;
extern void *record24_8c17948c(int);
extern void *record30_8c1794a0(int);
extern void *block32_8c1794b4(int);
extern void *record30_8c1794c8(int);
void operation_8c13a93c(void)
{
    void *t1;
    void *t2;
    void *t3;
    void *t4;
    g_8c4d9c10 = g_8c4d9b60;
    t1 = record24_8c17948c(0x21);
    g_8c4d9c00 = t1;
    t2 = record30_8c1794a0(0x21);
    g_8c4d9c04 = t2;
    t3 = block32_8c1794b4(0x21);
    g_8c4d9c08 = t3;
    t4 = record30_8c1794c8(0x21);
    g_8c4d9c0c = t4;
}
