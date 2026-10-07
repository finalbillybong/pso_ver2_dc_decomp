/* 0x8c027cd4: field meaning is unknown; writes exactly 19 bytes. */
void init_bytes(unsigned int flags, signed char *bytes)
{
    int i;
    signed char value;
    signed char *cursor = bytes;

    i = 0;
    value = -1;
    for (; i < 19; i++) {
        *cursor = value;
        cursor++;
    }
    if (flags & 0x80)
        bytes[0] = 0;
}
