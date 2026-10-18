typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c470640 S_g8c470640;
extern S_g8c470640 *g_8c470640;
extern void call_8c03dc40(void *, int);
void operation_8c0f7c5c(void)
{
    call_8c03dc40(g_8c470640, 1);
    g_8c470640 = (S_g8c470640 *)0;
}
