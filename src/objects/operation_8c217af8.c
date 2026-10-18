extern void call_8c388984(int, int, int);
void operation_8c217af8(int a0)
{
    int v6;
    if (7 > a0) {
        v6 = (int)0x8c505304;
        v6 += a0 * 0xbc;
        call_8c388984(v6, (int)(v6 + 0xbc), (int)((unsigned int)(7 - a0) * 0xbc >> 2));
    }
    *(int *)0x8c505244 -= 1;
}
