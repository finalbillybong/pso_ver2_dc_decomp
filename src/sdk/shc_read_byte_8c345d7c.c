/* SDK pool group 0x8c345d7c (Hitachi SHC): reads one byte below 0x200000 by
   fetching its aligned word. */
extern void read_word_8c345e00(int, unsigned char *);

int read_byte_8c345d7c(int address, unsigned char *out)
{
    unsigned char word[4];
    int offset;
    if (address < 0x200000) {
        offset = address & 3;
        address &= ~3;
        read_word_8c345e00(address, word);
        *out = *(unsigned char *)((int)word + offset);
    }
    return 0;
}
