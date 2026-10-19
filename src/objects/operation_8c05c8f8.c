typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4679a4;
extern int g_8c4679a8;
extern int g_8c4679ac;
extern int g_8c4679b0;
extern char g_8c2f3758[];
extern int operation_8c05bbf8(void);
extern int operation_8c059f44(void *, int);
extern int operation_8c059f04(int);
extern void call_8c05f15c(void);
extern void call_8c0c7628(void);
void operation_8c05c8f8(void)
{
    int t1;
    int t2;
    int t3;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = operation_8c059f44((void *)((void *)0x8c2f36ac), (int)(g_8c2f3758 + 0xce));
        g_8c4679a4 = (int)(t2);
    } else {
        t3 = operation_8c059f04((int)((void *)0x8c2f36ac));
        g_8c4679a4 = (int)(t3);
    }
    g_8c4679a8 = 0;
    g_8c4679ac = 0;
    g_8c4679b0 = 0;
    call_8c05f15c();
    call_8c0c7628();
}
