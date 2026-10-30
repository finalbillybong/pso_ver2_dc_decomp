/* SDK pool group 0x8c345e8c-0x8c345ee4 (Hitachi SHC): writes one aligned word
   below 0x200000 through the transfer routine at 0x8c36e384. */
extern void transfer_8c36e384(void *, int, int, int, int, int);

int write_word_8c345e8c(int address, int value)
{
    int error = 0;
    if (address & 3) error = 0xf010101;
    else if (address < 0x200000)
        transfer_8c36e384(&value, address + 0xa0800000, 4, 1, 0, 0);
    return error;
}
