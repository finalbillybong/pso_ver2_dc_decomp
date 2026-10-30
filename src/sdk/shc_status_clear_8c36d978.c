int read_status_clear_8c36d978(unsigned long *out)
{
    *out = (*(volatile unsigned long *)0xa05f688c & 1) ? 0 : 1;
    return 0;
}
