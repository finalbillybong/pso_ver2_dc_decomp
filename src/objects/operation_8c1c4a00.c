typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2d60 S_g8c4e2d60;
typedef struct S_g8c4e2d64 S_g8c4e2d64;
extern S_g8c4e2d60 *g_8c4e2d60;
extern S_g8c4e2d64 *g_8c4e2d64;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void operation_8c105320(int);
void operation_8c1c4a00(void)
{
    call_8c37d534(g_8c4e2d64);
    call_8c011ec0(g_8c4e2d64);
    if (g_8c4e2d60 != 0) {
        operation_8c105320((int)g_8c4e2d60);
    }
}
