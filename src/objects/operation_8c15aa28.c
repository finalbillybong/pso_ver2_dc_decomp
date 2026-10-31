typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9b60 S_g8c4d9b60;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_42c S_vv1_42c;
struct S_vv1 {
    char unknown0[0x42c];
    S_vv1_42c *f42c;
};
struct S_vv1_42c {
    char unknown0[0x158];
    int f158;
    int f15c;
    char unknown160[0x18];
    int f178;
    int f17c;
};
extern S_g8c4d9b60 *g_8c4d9b60;
extern int g_8c4dab40;
extern int g_8c4dab44;
extern int g_8c4dab48;
extern int g_8c4dab4c;
void operation_8c15aa28(void)
{
    S_vv1 *v1;
    int t1;
    v1 = (S_vv1 *)g_8c4d9b60;
    t1 = 0x42c;
    g_8c4dab40 = (*(S_vv1_42c **)((char *)v1 + t1))->f178;
    g_8c4dab48 = (*(S_vv1_42c **)((char *)v1 + t1))->f17c;
    g_8c4dab44 = (*(S_vv1_42c **)((char *)v1 + t1))->f158;
    g_8c4dab4c = (*(S_vv1_42c **)((char *)v1 + t1))->f15c;
}
