typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c391c94(void);
void operation_8c074ce4(void)
{
    int v1;
    v1 = (int)(((*(int *)0x8c4689f4 & 2)) != 0);
    if (v1 == 0) {
        call_8c391c94();
        *(int *)0x8c4689f4 |= 2;
    }
}
