typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
void operation_8c1709dc(void)
{
    int v1;
    v1 = (int)0;
    while (8 > v1) {
        *(short *)((char *)0x8c510ce8 + (v1 << 1)) = 0;
        v1 = (int)(v1 + 1);
    }
}
