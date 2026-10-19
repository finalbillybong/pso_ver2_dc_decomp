typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4e1a60;
extern void operation_8c05428c(void *, int, int);
extern void operation_8c05426c(void *, int, int);
void operation_8c1aa6f4(int a0)
{
    if (g_8c4e1a60 == 1) {
        operation_8c05428c((void *)a0, 0, 1);
        return;
    }
    operation_8c05426c((void *)a0, 0, 1);
}
