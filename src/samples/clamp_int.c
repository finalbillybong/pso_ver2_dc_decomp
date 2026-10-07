/* 0x8c0c51c8: inferred name and parameter types. */
int clamp_int(int value, int lower, int upper)
{
    if (value < lower)
        value = lower;
    if (value > upper)
        value = upper;
    return value;
}
