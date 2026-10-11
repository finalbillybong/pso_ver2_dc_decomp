short advance_counter_8c01d5fc(int amount)
{
    int step = amount + 1;
    short old = *(short *)(0x8c41cb84);
    *(short *)(0x8c41cb84) = old + step;
    return old;
}
