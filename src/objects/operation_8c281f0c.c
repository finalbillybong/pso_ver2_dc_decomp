typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c18e044(void *, void *, int, int, int);
extern void call_8c238fd4(void *);
void operation_8c281f0c(void)
{
    call_8c18e044((void *)((void *)0x8c41cd3c), (void *)((void *)0x8c02cc68), 0, 0x14, 0xc);
    call_8c238fd4((void *)((void *)0x8c41ce5c));
    call_8c18e044((void *)((void *)0x8c41ce80), (void *)((void *)0x8c02cc60), 0, 0x1c, 9);
}
