typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c238500(void *, int, int);
void *operation_8c247d48(void)
{
    if (*(int *)0x8c4db9e4 == 0) {
        return (void *)0x8c33b0fa;
    }
    if ((*(int *)0x8c4db9e4 + 0x11c4) == 0) {
        return (void *)0x8c33b0f8;
    }
    call_8c238500((void *)((void *)0x8c510ec0), (int)((int)(*(int *)0x8c4db9e4 + 0x11c4) + 4), 0xc);
    return (void *)0x8c510ec0;
}
