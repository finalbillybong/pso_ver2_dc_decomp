typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_0 S_g8c467180_0;
struct S_g8c467180 {
    S_g8c467180_0 *f00;
};
extern int operation_8c1a8e18(int);
extern void call_8c156d48(int, int, int, int, int);
extern int operation_8c1a8e4c(int);
extern void operation_8c156d30(int, int, int, int);
void operation_8c1a8d94(int a0, int a1)
{
    char *v1;
    int t1;
    int t2;
    v1 = (char *)*(int *)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f00 + 0x0) + ((short)a0 << 2));
    t1 = operation_8c1a8e18(a0);
    if (t1 == 0) {
        call_8c156d48(a1, (int)(v1), 0x16, (int)((short)a0), -0x979798);
        return;
    }
    t2 = operation_8c1a8e4c(a0);
    if (t2 == 0) {
        call_8c156d48(a1, (int)(v1), 0x16, (int)((short)a0), -0x2c6ff);
        return;
    }
    operation_8c156d30(a1, (int)(v1), 6, (int)((short)a0));
}
