typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c17e458(void);
int operation_8c180aac(void)
{
    if (*(int *)0x8c4db9e0 != 0 && *(int *)0x8c4db9e4 != 0 && *(int *)0x8c4db9ec != 0) {
        call_8c17e458();
    }
    return -0x10000;
}
