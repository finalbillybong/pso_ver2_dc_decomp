typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c510c80;
extern int g_8c510c84;
extern int g_8c510cc4;
extern int g_8c510ccc;
extern int g_8c513480;
extern int operation_8c01c434(void);
extern int call_8c18de4c(int);
extern int call_8c18e130(int, void *, int, int, int);
extern void clear_global_8c256b24(void);
extern void operation_8c244688(void);
void operation_8c243900(void)
{
    int v1;
    int t1;
    int t2;
    int t3;
    g_8c510c80 = 0;
    t1 = operation_8c01c434();
    if (t1 == 1) {
        v1 = (int)0x19;
    } else {
        v1 = (int)0x1e;
    }
    g_8c510c84 = (int)(v1);
    t2 = call_8c18de4c(0x3218);
    t3 = call_8c18e130(t2, (void *)((void *)0x8c24398c), 0, 0x42c, 0xc);
    g_8c510cc4 = (int)(t3);
    clear_global_8c256b24();
    operation_8c244688();
    g_8c510ccc = 1;
    g_8c513480 = 0;
}
