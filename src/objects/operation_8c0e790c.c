typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4dc800;
extern void operation_8c0e7a90(void);
extern void operation_8c0e7938(void);
void operation_8c0e790c(void)
{
    if (g_8c4dc800 != 0) {
        operation_8c0e7a90();
        return;
    }
    operation_8c0e7938();
}
