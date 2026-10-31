/* SDK pool group 0x8c37a328 (Hitachi SHC): with interrupts masked, accesses
   word registers through the G2 transfer routine; returns 1 on success. */
extern int transfer_8c36e384(void *, int, int, int, int, int);
int read_status_8c37a328(int base)
{
    int v = 0;
    int r;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    r = transfer_8c36e384(&v, base + 0x14, 4, 1, 1, 1);
    _builtin_set_imask(old);
    if (r) return 0;
    return 1;
}

int write_key_8c37a37e(int base)
{
    int v = (base & 0xff00) << 8 | 0x5a00a500;
    int r;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    r = transfer_8c36e384(&v, base + 0x18, 4, 1, 1, 1);
    _builtin_set_imask(old);
    if (r) return 0;
    return 1;
}
