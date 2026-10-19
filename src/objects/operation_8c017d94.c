typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
extern S_g8c418a00 *g_8c418a00;
extern char g_8c2e3014[];
extern void operation_8c011efc(void *);
extern int operation_8c01ba48(void);
extern void call_8c02e7a8(void *, int);
extern void call_8c02e700(void *);
void operation_8c017d94(int a0)
{
    int t1;
    if (a0 != 0) {
        operation_8c011efc((void *)((g_8c2e3014 + 0x6d)));
        t1 = operation_8c01ba48();
        call_8c02e7a8(g_8c418a00, t1);
        return;
    }
    call_8c02e700(g_8c418a00);
}
