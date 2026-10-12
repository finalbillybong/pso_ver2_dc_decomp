typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ec20 S_g8c46ec20;
typedef struct S_g8c46ec24 S_g8c46ec24;
extern char g_8c301ecc[];
extern int call_8c18e768(void *, int);
extern void call_8c01024c(int, void *, void *, int);
void operation_8c09ccfc(void)
{
    int t1;
    t1 = call_8c18e768((void *)(*(S_g8c46ec24 **)0x8c46ec24), 0x200);
    call_8c01024c(0, (void *)((g_8c301ecc + 0x19)), (void *)(*(S_g8c46ec20 **)0x8c46ec20), (int)(t1 + 1));
}
