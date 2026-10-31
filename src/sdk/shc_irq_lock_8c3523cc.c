void lock_8c3523cc(int *save)
{
    *save = _builtin_get_imask();
    _builtin_set_imask(15);
}

void unlock_8c3523e4(int *save)
{
    _builtin_set_imask(*save);
}
