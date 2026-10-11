void reset_text_cursor_8c18ea38(void)
{
    *(char **)0x8c4dbf40 = (char *)0x8c4dbe40;
    *(char *)0x8c4dbe40 = 0;
}
