typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4d7b80;
extern int g_8c4d7b84;
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
void operation_8c107fd8(void)
{
    int t1;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c30b7a4), 0, 0, 0);
    }
    g_8c4d7b80 = (int)(t1);
    g_8c4d7b84 = 1;
}
