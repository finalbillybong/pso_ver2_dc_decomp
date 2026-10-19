typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c470500;
extern int g_8c470504;
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
void operation_8c0f0364(void)
{
    int t1;
    int t2;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c309084), 0, 0, 0);
    }
    g_8c470500 = (int)(t1);
    t2 = call_8c011ecc(0x440);
    if (t2 != 0) {
        call_8c03d610(t2, 1, (void *)((void *)0x8c3090c0), 0, 0, 0);
    }
    g_8c470504 = (int)(t2);
}
