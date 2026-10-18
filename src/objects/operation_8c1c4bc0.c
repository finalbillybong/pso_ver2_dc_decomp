typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2d80 S_g8c4e2d80;
typedef struct S_g8c4e2d84 S_g8c4e2d84;
extern S_g8c4e2d80 *g_8c4e2d80;
extern S_g8c4e2d84 *g_8c4e2d84;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void operation_8c105320(int);
void operation_8c1c4bc0(void)
{
    call_8c37d534(g_8c4e2d84);
    call_8c011ec0(g_8c4e2d84);
    if (g_8c4e2d80 != 0) {
        operation_8c105320((int)g_8c4e2d80);
    }
}
