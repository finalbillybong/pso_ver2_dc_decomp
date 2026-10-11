extern int adjust_330(void *, short);

int adjust_unless_mode2_8c04a748(char *o, short amount)
{
    int mode2 = *(short *)(o + 0x308) == 2;
    if (mode2) return 0;
    return adjust_330(o, amount);
}
