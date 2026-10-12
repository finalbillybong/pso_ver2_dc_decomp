typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
extern S_g8c418a00 *g_8c418a00;
extern int g_8c418a08;
extern int g_8c41bce4;
extern void call_8c01787c(void);
extern void call_8c02f290(void *, int);
void operation_8c0176bc(int a0)
{
    g_8c418a08 = 1;
    call_8c01787c();
    call_8c02f290(g_8c418a00, a0);
    g_8c41bce4 = 0x13;
}
