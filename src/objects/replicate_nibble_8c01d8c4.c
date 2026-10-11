int replicate_nibble_8c01d8c4(int unused, int value)
{
    return ((value & 0xf0) << 16) | value;
}
