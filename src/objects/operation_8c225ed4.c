typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c506144 S_g8c506144;
extern S_g8c506144 *g_8c506144;
extern void call_8c37d534(void *);
extern void operation_8c105320(int);
void operation_8c225ed4(void)
{
    call_8c37d534((void *)((void *)0x8c33760c));
    operation_8c105320((int)g_8c506144);
    g_8c506144 = (S_g8c506144 *)0;
}
