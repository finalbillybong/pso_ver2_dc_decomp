typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db524 S_g8c4db524;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4db524 *g_8c4db524;
void operation_8c1733bc(void)
{
    S_vv1 *v1;
    if (g_8c4db524 != 0) {
        v1 = (S_vv1 *)g_8c4db524;
        v1->f04 |= 1;
        g_8c4db524 = (S_g8c4db524 *)0;
    }
}
