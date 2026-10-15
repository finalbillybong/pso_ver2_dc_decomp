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
extern int g_8c510ba0;
extern int g_8c511140;
extern S_L8c339ca0 g_8c339ca0;
extern void call_8c12c714(float);
void operation_8c248220(int a0)
{
    int v1;
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 != 0) {
        call_8c12c714((float)(a0 - (&g_8c339ca0)->f0c));
        (&g_8c339ca0)->f0c = a0;
        g_8c511140 = a0;
    }
}
