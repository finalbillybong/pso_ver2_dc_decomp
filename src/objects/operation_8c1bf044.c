typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2bc0 S_g8c4e2bc0;
extern S_g8c4e2bc0 *g_8c4e2bc0;
extern int g_8c4e2bc4;
extern int g_8c4e2bc8;
extern void call_8c03dc40(void *, int);
void operation_8c1bf044(void)
{
    g_8c4e2bc8 = 0;
    g_8c4e2bc4 = 0;
    if (g_8c4e2bc0 != 0) {
        call_8c03dc40(g_8c4e2bc0, 1);
    }
}
