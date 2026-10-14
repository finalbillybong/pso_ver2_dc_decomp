typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void restore_child_blend(void);
extern void call_8c38d81c(int, int, int);
void operation_8c227a5c(int a0)
{
    restore_child_blend();
    call_8c38d81c((int)(a0 + 0x68), 4, 1);
}
