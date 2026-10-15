typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
struct S_L8c339ca0 {
    char unknown0[0xc];
    int f0c;
};
extern S_L8c339ca0 g_8c339ca0;
extern void operation_8c238e94(int);
extern void call_8c12c714(float);
extern void call_8c2488a8(int);
void operation_8c248314(int a0)
{
    operation_8c238e94(a0);
    call_8c12c714((float)(a0 - (&g_8c339ca0)->f0c));
    call_8c2488a8(a0);
}
