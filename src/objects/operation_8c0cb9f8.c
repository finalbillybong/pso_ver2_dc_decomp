typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void set_child_blend(void);
extern void call_8c38efbc(int, int, int);
void operation_8c0cb9f8(int a0)
{
    set_child_blend();
    call_8c38efbc((int)(a0 + 0x20), 4, 1);
}
