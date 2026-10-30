void operation_8c173528(void)
{
    int v1;
    int m;
    v1 = 0;
    m = -1;
    while (0x12 > v1) {
        *(int *)((char *)0x8c4db600 + (v1 << 2)) = m;
        v1 = v1 + 1;
    }
}
