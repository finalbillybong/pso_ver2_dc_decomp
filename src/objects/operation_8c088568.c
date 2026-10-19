typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c469d60;
extern int g_8c469d64;
extern char g_8c2fffb0[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int call_8c118528(void *);
void operation_8c088568(void)
{
    int t1;
    int t2;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 5, (void *)((void *)0x8c2fff34), 0, 0, 0);
    }
    g_8c469d60 = (int)(t1);
    t2 = call_8c118528((void *)((g_8c2fffb0 + 0xca)));
    g_8c469d64 = (int)(t2);
}
