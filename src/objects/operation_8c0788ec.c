typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c2fd8ac[];
extern int operation_8c05bbf8(void);
extern int call_8c059f44(void *, void *);
extern int call_8c118528(void *);
extern int operation_8c059f04(int);
void operation_8c0788ec(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = call_8c059f44((void *)((void *)0x8c2fd89c), (void *)((g_8c2fd8ac + 0x91)));
        *(int *)0x8c469a60 = t2;
        t3 = call_8c118528((void *)((g_8c2fd8ac + 0xab)));
        *(int *)0x8c469a64 = t3;
        return;
    }
    t4 = operation_8c059f04((int)(void *)0x8c2fd89c);
    *(int *)0x8c469a60 = t4;
    t5 = call_8c118528((void *)((g_8c2fd8ac + 0xc2)));
    *(int *)0x8c469a64 = t5;
}
