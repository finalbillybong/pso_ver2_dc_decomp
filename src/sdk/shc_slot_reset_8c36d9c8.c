/* SDK pool group 0x8c36d9c8 (Hitachi SHC): with interrupts masked, clears a
   pending flag of value 1 or reports error 0x90102. */
typedef struct Obj {
    char unknown0[0x28];
    int pending;
} Obj;

int slot_reset_8c36d9c8(Obj *o)
{
    int zero = 0;
    int r = zero;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    if (o->pending != 1) r = 0x90102; else o->pending = zero;
    if (0) { zero++; r++; }
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto restore;
restore:
    _builtin_set_imask(old);
    return r;
}
