typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
struct S_g8c4db9e4 {
    char unknown0[0x244];
    int f244;
    int f248;
};
extern void call_8c12b77c(void *, void *, int);
void operation_8c15b2e0(void)
{
    if (*(int *)0x8c4db9e4 != 0) {
        (*(S_g8c4db9e4 **)0x8c4db9e4)->f248 = *(int *)0x8c4db124;
        (*(S_g8c4db9e4 **)0x8c4db9e4)->f244 = *(int *)0x8c4db120;
        call_8c12b77c(((char *)*(S_g8c4db9e4 **)0x8c4db9e4 + 0x24c), (void *)0x8c4dab80, 0x5a0);
    }
}
