int features_ready_8c25c3dc(void)
{
    unsigned char *state = *(unsigned char **)0x8c4db9e4;
    if (!(unsigned char)state[0x118c] || !(unsigned char)state[0x119c]) return 0;
    return !(*(int *)0x8c3403e8 == 0);
}
