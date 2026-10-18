typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2da0 S_g8c4e2da0;
typedef struct S_g8c4e2da4 S_g8c4e2da4;
extern S_g8c4e2da0 *g_8c4e2da0;
extern S_g8c4e2da4 *g_8c4e2da4;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void operation_8c105320(int);
void operation_8c1c4d80(void)
{
    call_8c37d534(g_8c4e2da4);
    call_8c011ec0(g_8c4e2da4);
    if (g_8c4e2da0 != 0) {
        operation_8c105320((int)g_8c4e2da0);
    }
}
