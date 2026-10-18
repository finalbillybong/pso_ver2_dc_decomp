typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4679a4 S_g8c4679a4;
extern S_g8c4679a4 *g_8c4679a4;
extern void operation_8c05f2dc(void);
extern void call_8c03dc40(void *, int);
void operation_8c05c9b8(void)
{
    operation_8c05f2dc();
    if (g_8c4679a4 != 0) {
        call_8c03dc40(g_8c4679a4, 1);
        g_8c4679a4 = (S_g8c4679a4 *)0;
    }
}
