typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4e2280;
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern void call_8c1acea4(void);
void operation_8c1ad2f8(void)
{
    int t1;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 5, (void *)((void *)0x8c325218), 0, 0, 0);
    }
    g_8c4e2280 = (int)(t1);
    if (t1 != 0) {
        call_8c1acea4();
    }
}
