typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c505964;
extern int g_8c505968;
extern int g_8c505970;
extern int call_8c0787cc(int, int);
void operation_8c21daec(int a0)
{
    int v21;
    int t1;
    int cur;
    v21 = (int)g_8c505964;
    if (v21 != 0) {
        t1 = call_8c0787cc(a0, v21);
        cur = g_8c505964;
        g_8c505968 = cur;
        g_8c505970 = (int)(t1);
        g_8c505964 = cur + t1;
    }
}
