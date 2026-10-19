typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4d9e20;
extern int call_8c011e9c(int);
void operation_8c13f3a0(void)
{
    int t1;
    if (g_8c4d9e20 == 0) {
        t1 = call_8c011e9c(0x25400);
        g_8c4d9e20 = (int)(t1);
        if (t1 == 0) {
            return;
        }
    }
}
