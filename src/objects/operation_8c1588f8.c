typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4daaa8 S_g8c4daaa8;
struct Frame {
    char unknown0[0x4];
};
extern S_g8c4daaa8 *g_8c4daaa8;
extern void operation_8c163ee0(void *);
extern void call_8c21955c(void *, int, int);
void operation_8c1588f8(int a0, int a1)
{
    if (g_8c4daaa8 != 0) {
        operation_8c163ee0((void *)(&a0));
        a0 = a0 + -1;
        call_8c21955c(g_8c4daaa8, a0, a1);
    }
}
