extern unsigned long _seed;

int rand(void)
{
    _seed = _seed * 1103515245 + 12345;
    return (int)((_seed >> 16) & 0x7fff);
}
