typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2d40 S_g8c4e2d40;
typedef struct S_g8c4e2d44 S_g8c4e2d44;
extern S_g8c4e2d40 *g_8c4e2d40;
extern S_g8c4e2d44 *g_8c4e2d44;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void operation_8c105320(int);
void operation_8c1c4840(void)
{
    call_8c37d534(g_8c4e2d44);
    call_8c011ec0(g_8c4e2d44);
    if (g_8c4e2d40 != 0) {
        operation_8c105320((int)g_8c4e2d40);
    }
}
