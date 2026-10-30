/* Reads four bytes from the uncached area at an aligned offset (Hitachi SHC). */
extern void read_block_8c36e384(void *dst, unsigned long addr, int size, int count, int b, int c);

int flash_read_8c345ee4(int offset, int value)
{
    int err = 0;
    if (offset & 3) err = 0xf010101;
    else if (offset < 0x200000) read_block_8c36e384(&value, 0xa0800000 + offset, 4, 1, 0, 0);
    return err;
}
