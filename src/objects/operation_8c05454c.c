typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4678c0;
extern char g_8c2f3144[];
extern int operation_8c05bbf8(void);
extern int call_8c059f44(void *, void *);
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
void operation_8c05454c(void)
{
    int t1;
    int t2;
    int t3;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = call_8c059f44((void *)((void *)0x8c2f3120), (void *)((g_8c2f3144 + 0x4a)));
        g_8c4678c0 = (int)(t2);
        return;
    }
    t3 = call_8c011ecc(0x440);
    if (t3 != 0) {
        call_8c03d610(t3, 1, (void *)((void *)0x8c2f3120), 0, 0, 0);
    }
    g_8c4678c0 = (int)(t3);
}
