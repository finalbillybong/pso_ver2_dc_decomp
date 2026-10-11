int fits_8c20b4f4(int length, int *used)
{
    return length + *used + 1 < 0x80;
}
