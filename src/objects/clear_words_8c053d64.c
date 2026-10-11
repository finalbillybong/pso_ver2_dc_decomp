void clear_words_8c053d64(void)
{
    int i;
    for (i = 0; i < 16; i++) *(int *)((char *)0x8c467880 + (i << 2)) = 0;
}
