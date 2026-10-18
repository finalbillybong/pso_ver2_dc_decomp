typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4db9e4;
extern int g_8c4dc800;
extern int operation_8c01c25c(void);
extern void operation_8c1591d4(void);
extern void call_8c12b77c(int, void *, int);
void operation_8c177a90(void)
{
    int t1;
    t1 = operation_8c01c25c();
    if (t1 != 0x10) {
        if (g_8c4dc800 != 0) {
            operation_8c1591d4();
        }
        if ((g_8c4db9e4 + 0x44) != 0 && (void *)0x8c4db6e0 != 0) {
            call_8c12b77c((int)(g_8c4db9e4 + 0x44), (void *)((void *)0x8c4db6e0), 0x200);
        }
    }
}
