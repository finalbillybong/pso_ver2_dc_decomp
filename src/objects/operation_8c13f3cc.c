typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9e20 S_g8c4d9e20;
extern S_g8c4d9e20 *g_8c4d9e20;
extern void call_8c011ec0(void *);
void operation_8c13f3cc(void)
{
    if (g_8c4d9e20 != 0) {
        call_8c011ec0(g_8c4d9e20);
        g_8c4d9e20 = (S_g8c4d9e20 *)0;
    }
}
