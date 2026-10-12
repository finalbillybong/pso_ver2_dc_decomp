typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c12b880(void *, int, int);
void operation_8c1a9940(void)
{
    int v1;
    call_8c12b880((void *)0x8c4e18c0, 0, 0x90);
    call_8c12b880((void *)0x8c4e1950, 0, 0xd8);
    v1 = (int)0;
    while (0x12 > v1) {
        *(int *)((char *)0x8c4e1950 + (v1 * 0xc)) = v1;
        v1 = (int)(v1 + 1);
    }
}
