typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c0259f8(void *);
extern void call_8c025c50(int, int);
void operation_8c1ee6c4(int a0)
{
    operation_8c0259f8((void *)a0);
    call_8c025c50(a0, a0 + 0x318);
}
