/* SDK pool group 0x8c344504 (Hitachi SHC): forwards to 0x8c344398. */
extern void target_8c344398(void);

void forward_8c344504(void)
{
    target_8c344398();
}
