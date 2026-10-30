/* SDK pool group 0x8c343ca4-0x8c343cb0 (Hitachi SHC): forwards to 0x8c343bd0. */
extern void target_8c343bd0(void);

void thunk_8c343ca4(void)
{
    target_8c343bd0();
}
