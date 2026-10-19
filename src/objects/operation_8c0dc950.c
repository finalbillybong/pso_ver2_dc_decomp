typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c46fe20;
extern void clear_global_8c18bad4(void);
extern void operation_8c225558(void);
void operation_8c0dc950(void)
{
    clear_global_8c18bad4();
    operation_8c225558();
    g_8c46fe20 = 0;
}
