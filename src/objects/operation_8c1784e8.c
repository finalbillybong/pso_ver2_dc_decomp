typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db8e0 S_g8c4db8e0;
typedef struct S_g8c4db8e4 S_g8c4db8e4;
extern S_g8c4db8e0 *g_8c4db8e0;
extern S_g8c4db8e4 *g_8c4db8e4;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
void operation_8c1784e8(void)
{
    call_8c37d534(g_8c4db8e4);
    call_8c011ec0(g_8c4db8e4);
    g_8c4db8e4 = (S_g8c4db8e4 *)0;
    if (g_8c4db8e0 != 0) {
        call_8c03dc40(g_8c4db8e0, 1);
    }
}
