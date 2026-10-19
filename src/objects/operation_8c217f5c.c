typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c18e044(int, void *, int, int, int);
extern void operation_8c02db24();
int operation_8c217f5c(int a0)
{
    call_8c18e044((int)(a0 + 0x58), operation_8c02db24, 0, 8, 8);
    return (int)(a0);
}
