typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c1a99c0(int a0)
{
    if (a0 > 0x11) {
        return 0;
    }
    if (*(int *)0x8c44be20 == 0) {
        if (*(int *)0x8c4703c0 != 3) {
            goto L_8c1a99e4;
        }
    }
    return *(int *)((char *)0x8c324490 + (a0 << 3));
L_8c1a99e4:;
    return *(int *)((char *)0x8c324290 + (a0 << 3));
}
