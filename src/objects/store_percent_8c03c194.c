void store_percent_8c03c194(int *out, int value)
{
    if (value < 0 || value > 99) value = 0;
    *out = value;
}
