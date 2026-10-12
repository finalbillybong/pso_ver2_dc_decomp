typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c02671c(int, int, int, float);
int operation_8c026700(int a0, int a1)
{
    call_8c02671c(a0, a0 + 0x3c, a1, 0.0f);
    return 1;
}
