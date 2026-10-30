/* SDK pool group 0x8c345d2c-0x8c345d7c (Hitachi SHC): reads one aligned word
   below 0x200000 through the transfer routine at 0x8c36e010. */
extern void transfer_8c36e010(int, void *, int, int, int, int);

int read_word_8c345d2c(int address, void *value)
{
    int error = 0;
    if (address & 3) error = 0xf010101;
    else if (address < 0x200000)
        transfer_8c36e010(address + 0xa0800000, value, 4, 1, 0, 0);
    return error;
}
