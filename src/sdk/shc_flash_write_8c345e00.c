/* Writes four bytes to the uncached area at an aligned offset (Hitachi SHC). */
extern void write_block_8c36e010(unsigned long addr, int value, int size, int count, int b, int c);

int flash_write_8c345e00(int offset, int value)
{
    int err = 0;
    if (offset & 3) err = 0xf010101;
    else if (offset < 0x200000) write_block_8c36e010(0xa0800000 + offset, value, 4, 1, 0, 0);
    return err;
}
