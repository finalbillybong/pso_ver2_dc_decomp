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
extern void call_8c219670(void *, int, int, int);
void operation_8c158938(int a0, int a1, int a2)
{
    if (g_8c4daaa8 != 0) {
        operation_8c163ee0((void *)(&a1));
        a1 = a1 + -1;
        call_8c219670(g_8c4daaa8, a0, a1, a2);
    }
}
