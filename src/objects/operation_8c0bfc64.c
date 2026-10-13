typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c46f3e0;
extern int g_8c46f3e4;
extern int g_8c46f3e8;
extern int g_8c46f3ec;
extern int g_8c46f3f0;
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void operation_8c0bfc64(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c305c9c), 0, 0, 0);
    }
    g_8c46f3f0 = (int)(t1);
    t2 = record24_8c17948c(0x1a);
    g_8c46f3e0 = (int)(t2);
    t3 = record30_8c1794a0(0x1a);
    g_8c46f3e4 = (int)(t3);
    t4 = block32_8c1794b4(0x1a);
    g_8c46f3e8 = (int)(t4);
    t5 = record30_8c1794c8(0x1a);
    g_8c46f3ec = (int)(t5);
}
