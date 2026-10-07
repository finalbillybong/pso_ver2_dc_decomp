/* 0x8c027064: inferred name; returns whether any selected bit is set. */
int mask_any(const unsigned int *value, unsigned int mask)
{
    return (*value & mask) != 0;
}
