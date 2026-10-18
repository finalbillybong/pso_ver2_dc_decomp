typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c467870;
void operation_8c054040(void)
{
    int v1;
    int v2;
    v2 = 0x18c;
    v1 = (int)0;
    while (v2 > v1) {
        *(int *)((char *)0x8c467240 + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    g_8c467870 = 0;
}
