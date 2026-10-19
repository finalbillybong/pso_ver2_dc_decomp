typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4dc800;
extern int g_8c4dc844;
extern void set_global_8c01c21c(void);
void operation_8c1598d8(void)
{
    g_8c4dc800 = 1;
    g_8c4dc844 = 1;
    set_global_8c01c21c();
}
