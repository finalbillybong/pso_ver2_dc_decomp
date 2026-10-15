typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_2391f4(void *);
float operation_8c0afdec(int a0, float f0)
{
    int v2;
    int t1;
    if (a0 >= 0x13) {
        return f0;
    }
    t1 = operation_2391f4((void *)((void *)0x8c41ce5c));
    if ((char)t1 != 0 || *(int *)0x8c46f29c == 1) {
        return f0 + *(float *)((char *)0x8c46f204 + (a0 << 2));
    }
    v2 = (int)(*(int *)0x8c510ba0 != 0);
    if (v2 != 0 || *(int *)0x8c46f29c == 2) {
        return f0 + *(float *)((char *)0x8c46f250 + (a0 << 2));
    }
    return f0;
}
