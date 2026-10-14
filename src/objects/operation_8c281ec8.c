typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c18e044(void *, void *, int, int, int);
extern void operation_8c01bb78();
void operation_8c281ec8(void)
{
    call_8c18e044((void *)((void *)0x8c418a0c), (void *)((void *)0x8c01bb7c), 0, 0x43c, 0xc);
    call_8c18e044((void *)((void *)0x8c41c740), operation_8c01bb78, 0, 0x20, 4);
}
