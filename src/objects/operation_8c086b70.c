typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469ce0 S_g8c469ce0;
typedef struct S_g8c469ce0_0 S_g8c469ce0_0;
struct S_g8c469ce0 {
    S_g8c469ce0_0 *f00;
};
extern S_g8c469ce0 *g_8c469ce0;
extern void call_8c37d534(void *);
extern void operation_8c105320(int);
void operation_8c086b70(void)
{
    call_8c37d534((void *)(g_8c469ce0->f00));
    operation_8c105320((int)g_8c469ce0);
}
