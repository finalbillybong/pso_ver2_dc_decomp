typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc7a0 S_g8c4dc7a0;
typedef struct S_g8c4dc7a4 S_g8c4dc7a4;
extern S_g8c4dc7a0 *g_8c4dc7a0;
extern S_g8c4dc7a4 *g_8c4dc7a4;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void operation_8c105320(int);
void operation_8c1a4a08(void)
{
    call_8c37d534(g_8c4dc7a4);
    call_8c011ec0(g_8c4dc7a4);
    if (g_8c4dc7a0 != 0) {
        operation_8c105320((int)g_8c4dc7a0);
    }
}
