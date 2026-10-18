typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc740 S_g8c4dc740;
typedef struct S_g8c4dc744 S_g8c4dc744;
extern S_g8c4dc740 *g_8c4dc740;
extern S_g8c4dc744 *g_8c4dc744;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void operation_8c105320(int);
void operation_8c1a44c8(void)
{
    call_8c37d534(g_8c4dc744);
    call_8c011ec0(g_8c4dc744);
    if (g_8c4dc740 != 0) {
        operation_8c105320((int)g_8c4dc740);
    }
}
