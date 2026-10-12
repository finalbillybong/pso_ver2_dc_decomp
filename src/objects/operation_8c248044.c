typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c238500(void *, int, int);
void *operation_8c248044(void)
{
    call_8c238500((void *)0x8c510ecc, *(int *)0x8c4db9e4 + 0x11c8, 0xc);
    return (void *)0x8c510ecc;
}
