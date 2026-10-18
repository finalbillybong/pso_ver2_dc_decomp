typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4688a0 S_g8c4688a0;
extern S_g8c4688a0 *g_8c4688a0;
extern void call_8c03dc40(void *, int);
void operation_8c060970(void)
{
    if (g_8c4688a0 != 0) {
        call_8c03dc40(g_8c4688a0, 1);
        g_8c4688a0 = (S_g8c4688a0 *)0;
    }
}
