typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2bc4 S_g8c4e2bc4;
extern int g_8c418244;
extern S_g8c4e2bc4 *g_8c4e2bc4;
extern int g_8c4e2bc8;
extern void call_8c0344f0(void *, int, int, int);
void operation_8c1bf1e0(void)
{
    int v2;
    int v1;
    v1 = (int)g_8c418244;
    v2 = (int)g_8c4e2bc8;
    if (v2 != v1) {
        g_8c4e2bc8 = (int)(v1);
        call_8c0344f0(g_8c4e2bc4, 0, 5, 4);
    }
}
