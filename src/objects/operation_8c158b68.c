typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daac0 S_g8c4daac0;
extern S_g8c4daac0 *g_8c4daac0;
extern void operation_8c105320(int);
void operation_8c158b68(void)
{
    if (g_8c4daac0 != 0) {
        operation_8c105320((int)g_8c4daac0);
        g_8c4daac0 = (S_g8c4daac0 *)0;
    }
}
