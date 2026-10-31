void lock_8c379800(int *save)
{
    *save = _builtin_get_imask();
    _builtin_set_imask(15);
}

void unlock_8c379818(int *save)
{
    _builtin_set_imask(*save);
}

void stub_8c37982e(void)
{
}
