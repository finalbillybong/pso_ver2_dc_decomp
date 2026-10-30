/* SDK pool group 0x8c345e50-0x8c345e8c (Hitachi SHC): reads one byte through
   an aligned four-byte read below 0x200000. */
extern void read_word_8c345e00(int, char *);

int read_byte_8c345e50(int address, char *out)
{
    char word[4];
    unsigned int offset;
    if (address < 0x200000) {
        offset = address & 3;
        address &= ~3;
        read_word_8c345e00(address, word);
        *out = word[offset];
    }
    return 0;
}
