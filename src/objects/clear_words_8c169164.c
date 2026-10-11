void clear_words_8c169164(void)
{
    int i;
    for (i = 0; i < 4; i++) *(int *)((char *)0x8c4db2e0 + (i << 2)) = 0;
}
