typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c5051e8 S_g8c5051e8;
extern int g_8c5051e0;
extern S_g8c5051e8 *g_8c5051e8;
extern void call_8c20bb4c(int, void *, int);
extern void call_8c20c408(int, void *, int);
extern void call_8c20d33c(int, void *, int);
extern void call_8c20e420(int, void *, int);
extern void call_8c20f644(int, void *, int);
extern void operation_8c0ddbd0(int, int, int);
void operation_8c2107fc(int a0, int a1)
{
    void *v;
    v = (void *)g_8c5051e8;
    switch (g_8c5051e0) {
    case 0:
        call_8c20bb4c(a0, v, a1);
        break;
    case 1:
    default:
        call_8c20c408(a0, v, a1);
        break;
    case 4:
        call_8c20d33c(a0, v, a1);
        break;
    case 2:
        call_8c20e420(a0, v, a1);
        break;
    case 3:
        call_8c20f644(a0, v, a1);
    }
    operation_8c0ddbd0(a1, (int)g_8c5051e8, 0x4f);
}
