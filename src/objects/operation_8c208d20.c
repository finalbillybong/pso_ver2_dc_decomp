typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4dc800;
extern int g_8c4dc844;
extern void set_global_8c01c21c(void);
void operation_8c208d20(void)
{
    g_8c4dc800 = 0;
    g_8c4dc844 = 0;
    set_global_8c01c21c();
}
