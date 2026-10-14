typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c1ada78(int);
extern void call_8c1ade54(int);
void operation_8c1b6844(int a0)
{
    call_8c05fbf8(0x3000c, 0, 0, 0);
    operation_8c1ada78(a0);
    call_8c1ade54(a0);
}
