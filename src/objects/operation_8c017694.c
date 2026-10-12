typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c016950(void);
extern void call_8c01787c(void);
void operation_8c017694(void)
{
    operation_8c016950();
    call_8c01787c();
    *(int *)0x8c41bce4 = 0x12;
}
