typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2d20 S_g8c4e2d20;
typedef struct S_g8c4e2d24 S_g8c4e2d24;
extern S_g8c4e2d20 *g_8c4e2d20;
extern S_g8c4e2d24 *g_8c4e2d24;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void operation_8c105320(int);
void operation_8c1c4680(void)
{
    call_8c37d534(g_8c4e2d24);
    call_8c011ec0(g_8c4e2d24);
    if (g_8c4e2d20 != 0) {
        operation_8c105320((int)g_8c4e2d20);
    }
}
