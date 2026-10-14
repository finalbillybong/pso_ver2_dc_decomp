typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510ba0 S_g8c510ba0;
struct S_g8c510ba0 {
    char unknown0[0x20];
    int f20;
};
extern int call_8c05fbf8(int, int, int, int);
extern void emit_control_60320(int, int, int);
void operation_8c1c1f74(int a0)
{
    int v1;
    int t1;
    if (*(int *)0x8c510ba0 == 0) {
        v1 = (int)-1;
    } else {
        v1 = (int)(*(S_g8c510ba0 **)0x8c510ba0)->f20;
    }
    if (v1 != -1 && v1 == 1) {
        return;
    }
    t1 = call_8c05fbf8(0x40004, (int)(a0 + 0x3c), 0, 0);
    emit_control_60320(t1, -0x800, 0);
}
