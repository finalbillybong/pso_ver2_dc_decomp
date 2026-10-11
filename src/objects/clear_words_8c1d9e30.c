void clear_words_8c1d9e30(void)
{
    int i;
    for (i = 0; i < 6; i++) *(int *)((char *)0x8c4e2ec0 + (i << 2)) = 0;
}
