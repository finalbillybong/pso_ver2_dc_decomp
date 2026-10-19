typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc4a0 S_g8c4dc4a0;
extern S_g8c4dc4a0 *g_8c4dc4a0;
extern void operation_8c105320(int);
void operation_8c19ca58(void)
{
    if (g_8c4dc4a0 != 0) {
        operation_8c105320((int)g_8c4dc4a0);
        g_8c4dc4a0 = (S_g8c4dc4a0 *)0;
    }
}
