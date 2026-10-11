void store_bounded_8c239120(unsigned char *out, unsigned char value)
{
    if (value >= 3) value = 0;
    out[4] = value;
}
