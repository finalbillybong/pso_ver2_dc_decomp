typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2dc0 S_g8c4e2dc0;
typedef struct S_g8c4e2dc4 S_g8c4e2dc4;
extern S_g8c4e2dc0 *g_8c4e2dc0;
extern S_g8c4e2dc4 *g_8c4e2dc4;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void operation_8c105320(int);
void operation_8c1c4f54(void)
{
    call_8c37d534(g_8c4e2dc4);
    call_8c011ec0(g_8c4e2dc4);
    if (g_8c4e2dc0 != 0) {
        operation_8c105320((int)g_8c4e2dc0);
    }
}
