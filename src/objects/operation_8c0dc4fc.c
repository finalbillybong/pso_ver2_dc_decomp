typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c0dc510(int, int, int, int);
void operation_8c0dc4fc(int a0, int a1)
{
    call_8c0dc510(a0, (int)(a0 + 0x38), (int)(a0 + 0x40), a1);
}
