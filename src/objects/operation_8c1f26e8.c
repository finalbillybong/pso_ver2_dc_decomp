typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e3160 S_g8c4e3160;
extern S_g8c4e3160 *g_8c4e3160;
extern int g_8c4e3164;
extern void operation_8c1f2718(void *, int);
void operation_8c1f26e8(int a0)
{
    if (g_8c4e3160 != 0) {
        operation_8c1f2718(g_8c4e3160, a0);
        g_8c4e3164 += 1;
    }
}
