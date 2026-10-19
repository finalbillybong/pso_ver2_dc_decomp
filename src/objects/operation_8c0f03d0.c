typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c470500 S_g8c470500;
typedef struct S_g8c470504 S_g8c470504;
extern S_g8c470500 *g_8c470500;
extern S_g8c470504 *g_8c470504;
extern void call_8c03dc40(void *, int);
void operation_8c0f03d0(void)
{
    if (g_8c470500 != 0) {
        call_8c03dc40(g_8c470500, 1);
    }
    if (g_8c470504 != 0) {
        call_8c03dc40(g_8c470504, 1);
    }
}
