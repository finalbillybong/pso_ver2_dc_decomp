typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c46fe20 *g_8c46fe20;
extern void operation_8c2255b0(void);
extern void operation_8c18bae0(void);
void operation_8c0dc978(void)
{
    S_vv1 *v1;
    if (g_8c46fe20 != 0) {
        v1 = (S_vv1 *)g_8c46fe20;
        v1->f04 |= 1;
        g_8c46fe20 = (S_g8c46fe20 *)0;
    }
    operation_8c2255b0();
    operation_8c18bae0();
}
