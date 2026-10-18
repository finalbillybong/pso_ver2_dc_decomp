typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc780 S_g8c4dc780;
typedef struct S_g8c4dc784 S_g8c4dc784;
extern S_g8c4dc780 *g_8c4dc780;
extern S_g8c4dc784 *g_8c4dc784;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void operation_8c105320(int);
void operation_8c1a4848(void)
{
    call_8c37d534(g_8c4dc784);
    call_8c011ec0(g_8c4dc784);
    if (g_8c4dc780 != 0) {
        operation_8c105320((int)g_8c4dc780);
    }
}
