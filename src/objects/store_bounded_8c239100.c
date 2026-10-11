void store_bounded_8c239100(unsigned char *out, unsigned char value)
{
    if (value >= 4) value = 0;
    out[2] = value;
}
