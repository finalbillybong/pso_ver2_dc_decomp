typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc6c0 S_g8c4dc6c0;
typedef struct S_g8c4dc6c4 S_g8c4dc6c4;
extern S_g8c4dc6c0 *g_8c4dc6c0;
extern S_g8c4dc6c4 *g_8c4dc6c4;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void operation_8c105320(int);
void operation_8c1a3e7c(void)
{
    call_8c37d534(g_8c4dc6c4);
    call_8c011ec0(g_8c4dc6c4);
    if (g_8c4dc6c0 != 0) {
        operation_8c105320((int)g_8c4dc6c0);
    }
}
