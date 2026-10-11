short advance_counter_8c01d5e8(int amount)
{
    int step = amount + 1;
    short old = *(short *)(0x8c41cb82);
    *(short *)(0x8c41cb82) = old + step;
    return old;
}
