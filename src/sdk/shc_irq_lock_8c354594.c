void init_hardware_8c354594(void)
{
}

void stub_8c354598(void)
{
}

void lock_8c35459c(int *save)
{
    *save = _builtin_get_imask();
    _builtin_set_imask(15);
}

void unlock_8c3545b4(int *save)
{
    _builtin_set_imask(*save);
}
