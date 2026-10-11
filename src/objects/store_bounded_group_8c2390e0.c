void store_bounded_8c2390e0(unsigned char *out, unsigned char value)
{
    if (value >= 2) value = 0;
    *out = value;
}

void store_bounded3_8c2390f0(unsigned char *out, unsigned char value)
{
    if (value >= 3) value = 0;
    out[1] = value;
}
