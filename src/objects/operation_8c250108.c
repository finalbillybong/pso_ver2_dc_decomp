typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
typedef struct S_g8c339cf0 S_g8c339cf0;
struct S_L8c339ca0 {
    char unknown0[0x50];
    S_g8c339cf0 *f50;
};
extern S_L8c339ca0 g_8c339ca0;
extern int call_8c1196d4(void *, void *, int);
extern void operation_8c0dc610(void *, float);
extern void call_8c250344(int, int);
extern void call_8c250190(int, int);
extern void operation_8c119764(int, int, int);
void operation_8c250108(int a0, int a1)
{
    int t1;
    t1 = call_8c1196d4((void *)((void *)0x8c33f768), (void *)((void *)0x8c33f770), 1);
    (&g_8c339ca0)->f50 = (S_g8c339cf0 *)t1;
    if ((&g_8c339ca0)->f50 != 0) {
        operation_8c0dc610((void *)((&g_8c339ca0)->f50), -12000.0f);
        if (a1 >= 0xb) {
            call_8c250344(a0, (int)(a1 + -0xb));
        } else {
            call_8c250190(a0, a1);
        }
        operation_8c119764((int)((&g_8c339ca0)->f50), (int)((void *)0x8c511020), 0);
    }
}
