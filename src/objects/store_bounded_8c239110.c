void store_bounded_8c239110(unsigned char *out, unsigned char value)
{
    if (value >= 2) value = 0;
    out[3] = value;
}
