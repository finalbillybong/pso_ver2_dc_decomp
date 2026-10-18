typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4e2ba0;
extern int g_8c4e2ba4;
extern float g_8c4e2ba8;
extern float g_8c4e2bac;
extern float g_8c4e2bb0;
extern float g_8c4e2bb4;
extern float g_8c4e2bb8;
extern void call_8c0db03c(int);
extern void clear_global_8c0de424(void);
extern void operation_8c0de4f8(void);
void operation_8c1beba4(int a0)
{
    call_8c0db03c(a0);
    clear_global_8c0de424();
    operation_8c0de4f8();
    g_8c4e2ba0 = 0;
    g_8c4e2ba4 = 0;
    g_8c4e2ba8 = 0.0f;
    g_8c4e2bac = 0.0f;
    g_8c4e2bb0 = 640.0f;
    g_8c4e2bb4 = 480.0f;
    g_8c4e2bb8 = -1.5999999f;
}
