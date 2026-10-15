typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c311e68[];
extern int operation_8c08dafc(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c123cc0(int a0)
{
    int t1;
    t1 = operation_8c08dafc(a0);
    if (t1 == 1) {
        call_8c38cf80(0x13001a, (void *)((g_8c311e68 + 0x53)));
        call_8c38cf80(0x13001b, (void *)((g_8c311e68 + 0x60)));
        call_8c38cf80(0x13001c, (void *)((g_8c311e68 + 0x6b)));
    }
}
