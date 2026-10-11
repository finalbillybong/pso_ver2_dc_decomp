int features_ready_8c1e779c(void)
{
    unsigned char *state = *(unsigned char **)0x8c4db9e4;
    if (!(unsigned char)state[0x12b8] || !(unsigned char)state[0x12c8]) return 0;
    return !(*(int *)0x8c32c108 == 0);
}
