/* SDK pool group 0x8c345f3c-0x8c345f8c (Hitachi SHC): writes one byte of
   word-addressed memory below 0x200000 by read-modify-write. */
typedef union Word {
    int word;
    char bytes[4];
} Word;

extern void read_word_8c345e00(int address, int *word);
extern void write_word_8c345ee4(int address, int word);

int write_byte_8c345f3c(int address, char value)
{
    Word data;
    int offset;
    if (address < 0x200000) {
        int base = address;
        offset = base & 3;
        base &= ~3;
        read_word_8c345e00(base, &data.word);
        data.bytes[offset] = value;
        write_word_8c345ee4(base, data.word);
    }
    return 0;
}
