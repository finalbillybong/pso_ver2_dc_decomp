void operation_8c159194(void)
{
    int v1;
    int m;
    v1 = 0;
    m = -1;
    while (0x4 > v1) {
        *(int *)((char *)0x8c4daae0 + (v1 << 2)) = m;
        v1 = v1 + 1;
    }
}
