typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d51d4 S_L8c4d51d4;
typedef struct S_L8c4d51d4_4 S_L8c4d51d4_4;
struct S_L8c4d51d4 {
    int f00;
    S_L8c4d51d4_4 *f04;
};
extern int g_8c4d52d4;
extern S_L8c4d51d4 g_8c4d51d4;
extern void call_8c35049c(void *);
extern int call_8c34ff80(int, void *, int);
extern void call_8c0605a0(void);
void operation_8c100a9c(void)
{
    int t1;
    if (g_8c4d52d4 != 0) {
        call_8c35049c((&g_8c4d51d4)->f04);
        t1 = call_8c34ff80(2, (void *)0x8c470780, 0x2d0c4);
        (&g_8c4d51d4)->f00 = t1;
        g_8c4d52d4 = 0;
        call_8c0605a0();
    }
}
