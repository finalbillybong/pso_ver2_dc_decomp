typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c238500(void *, int, int);
void *operation_8c247d1c(int a0)
{
    if (a0 == 0) {
        return (void *)0x8c33b0f8;
    }
    call_8c238500((void *)0x8c510ec0, a0 + 4, 0xc);
    return (void *)0x8c510ec0;
}
