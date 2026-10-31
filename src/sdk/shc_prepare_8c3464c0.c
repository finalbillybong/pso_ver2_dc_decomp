/* SDK pool group 0x8c3464c0 (Hitachi SHC): with interrupts masked, sets bit 0
   of the 0xa0702c00 register through the G2 transfer routines. */
extern void copy_8c36e010(int, void *, int, int, int, int);
extern void transfer_8c36e384(void *, int, int, int, int, int);
int prepare_8c3464c0(void)
{
    int v;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    copy_8c36e010(0xa0702c00, &v, 4, 1, 1, 1);
    v |= 1;
    transfer_8c36e384(&v, 0xa0702c00, 4, 1, 1, 1);
    _builtin_set_imask(old);
    return 0;
}
