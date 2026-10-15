typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c04b250(int, int, int, float, float, float);
void operation_8c04b230(int a0, int a1, float f0, float f1)
{
    call_8c04b250(a0, a1, 0, f0, f1, 0.5f);
}
